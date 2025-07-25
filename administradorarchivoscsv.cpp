#include <iostream>
#include "administradorarchivoscsv.h"
#include "listas.h"
#include "cartas.h"
#include <fstream>
#include <sstream>

void AdministradorArchivosCSV::guardar_cartas_csv(Listas<Cartas>& listaCartas) {
    // se usa ios::app para abrir el documento en modo añadir, y no sobreescribirlo
    ofstream archivo("cartas.csv", ios::app);
    if (archivo.is_open()) {

        //itera sobre la lista de cartas y escribe cada carta en cartas.csv
        Nodos<Cartas>* aux = listaCartas.primero;
        while (aux != nullptr) {
            const Cartas& carta = aux->dato;
            archivo << carta.cart_name << ","
                    << carta.expansion_symbol << ","
                    << carta.text_box << ","
                    << carta.type_line << ","
                    << carta.power_toughness << ","
                    << carta.collector_number << ","
                    << carta.mana_cost << ","
                    << carta.precio_carta << "\n";
            aux = aux->sig;
        }
        archivo.close();
        cout << "la carta se guardo en el archivo cartas.csv" << endl;
    } else {
        cout << "ERROR AL ABRIR EL ARCHIVO" << endl;
    }
}

//Funcion para cargar leer las cartas y mostrarlas en la terminal
Listas<Cartas> AdministradorArchivosCSV::cargar_cartas_csv() {
    Listas<Cartas> listaCartas;

    ifstream archivo("cartas.csv");
    if (!archivo.is_open()) {
        cout << "ERROR AL ABRIR EL ARCHIVO" << endl;
        // se regresa una lista vacia si no se pudo abrir el archivo
        return listaCartas;
    }

    string linea;
    // Ignorar la primera línea que contiene los encabezados
    getline(archivo, linea);
    while (getline(archivo, linea)) {
        stringstream leerDatos(linea);
        string nombre, simbolo_expansion, texto, tipo, fuerza_resistencia;
        int num_coleccionista, costo_mana, precio;

        // Leer los datos de la línea CSV
        getline(leerDatos, nombre, ',');
        getline(leerDatos, simbolo_expansion, ',');
        getline(leerDatos, texto, ',');
        getline(leerDatos, tipo, ',');
        getline(leerDatos, fuerza_resistencia, ',');
        leerDatos >> num_coleccionista;
        leerDatos.ignore();
        leerDatos >> costo_mana;
        leerDatos.ignore();
        leerDatos >> precio;

        // Creamos unobjeto de cartas con los datos leidos
        Cartas carta;
        carta.cart_name = nombre;
        carta.expansion_symbol = simbolo_expansion;
        carta.text_box = texto;
        carta.type_line = tipo;
        carta.power_toughness = fuerza_resistencia;
        carta.collector_number = num_coleccionista;
        carta.mana_cost = costo_mana;
        carta.precio_carta = precio;

        // se agrega la carta a la lista
        listaCartas.insertar(carta);
    }

    archivo.close();
    return listaCartas;
}
