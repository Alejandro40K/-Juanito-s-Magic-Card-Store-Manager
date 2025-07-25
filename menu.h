//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "administradorarchivoscsv.cpp"
#include "carrito_compras.h"

using namespace std;

class menu {
public:
    menu();
    void menu_principal();
};

menu::menu() {

}


void menu::menu_principal() {

    //istanciamos objetos de las clases:
    Listas<Cartas> listaCartas;
    Carrito_Compras carrito_de_compras;
    AdministradorArchivosCSV administradorArchivos;
    int opc;
    do {
        cout << "////////////////////////////////////////////////" << endl;
        cout << "//                                            //" << endl;
        cout << "//  'BIENVENIDO A MAGIC THE GATHERING STORE'  //" << endl;
        cout << "//                                            //" << endl;
        cout << "//      (cargue las cartas para comenzar)     //" << endl;
        cout << "//                                            //" << endl;
        cout << "////////////////////////////////////////////////" << endl;
        cout << "// :)Selecciona una opcion:                   //" << endl;
        cout << "//         1) Agregar una nueva carta         //" << endl;
        cout << "//         2) Cargar lista de cartas          //" << endl;
        cout << "//         3) Buscar por collector number     //" << endl;
        cout << "//         4) Buscar por tipo de linea        //" << endl;
        cout << "//         5) Buscar por Nombre               //" << endl;
        cout << "//         6) Eliminar carta por posicion     //" << endl;
        cout << "//         7) Agregar al Carrito de compras   //" << endl;
        cout << "//         8) Mostrar Carrito                 //" << endl;
        cout << "//         9) Eliminar carta del carrito      //" << endl;
        cout << "//         9) Eferctuar compra                //" << endl;
        cout << "//         0) Salir                           //" << endl;
        cout << "//                                            //" << endl;
        cout << "////////////////////////////////////////////////" << endl;
        cout << "Opcion:" << endl;

        cin >> opc;

        switch (opc) {
        case 1: {
            Cartas nuevaCarta;
            nuevaCarta.ingresar_carta();
            listaCartas.insertar(nuevaCarta);
            administradorArchivos.guardar_cartas_csv(listaCartas);
            break;
        }
        case 2: {
            cout << "////////////////////////////////////////////////" << endl;
            cout << "//                                            //" << endl;
            cout << "//           'CARTAS DISPONIBLES'             //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;
            //cargamos la lista de las cartas desde cartas.csv
            listaCartas = administradorArchivos.cargar_cartas_csv();
            //mostramos las cartas desde cartas.csv
            listaCartas.muestra_datos();
            break;
        }
        case 3: {
            int collectorNumber;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "//                                            //" << endl;
            cout << "//     BUSQUEDA POR NUMERO DE COLLECCION      //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "Ingresa el numero de coleccionista: \n";
            cin >> collectorNumber;
            int posicion = listaCartas.buscar_por_collector_number(collectorNumber);
            if (posicion != Listas<Cartas>::ERROR_LISTA) {
                cout << "La carta con el numero de coleccion " << collectorNumber << " se encuentra en la posicion: " << posicion << endl;
            } else {
                cout << "No se encontro ninguna carta con ese numero de coleccionista, intenta otra ves " << endl;
            }
            break;
        }

        case 4: {
            string tipoLinea;
            cout << "//////////////////////////////////////////////1//" << endl;
            cout << "//                                            //" << endl;
            cout << "//           BUSQUEDA POR TYPE LINE           //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "Ingresa el tipo de linea (Type line) de la carta:";
            cin >> tipoLinea;
            int posicion = listaCartas.buscar_por_type_line(tipoLinea);
            if (posicion != Listas<Cartas>::ERROR_LISTA) {
                cout << "La carta con el tipo de linea  " << tipoLinea << "  se encuentra en la posicion " << posicion << endl;
            } else {
                cout << "No se encontro ninguna carta con ese tipo de linea, intenta otra ves"<< endl;
            }
            break;
        }
        case 5: {
            string nombre;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "//                                            //" << endl;
            cout << "//    BUSQUEDA POR EL NOMBRE DE LA CARTA      //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "Ingresa el nombre de la carta:";
            cin >> nombre;
            int posicion = listaCartas.buscar_por_nombre(nombre);
            if (posicion != Listas<Cartas>::ERROR_LISTA) {
                cout << "La carta con el nombre " << nombre << " se encuentra en la posicion " << posicion << endl;
            } else {
                cout << "No se encontro ninguna carta con ese nombre, intenta otra ves"<<endl;
            }
            break;
        }
        case 6: {
            int posEliminar;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "//                                            //" << endl;
            cout << "//           ELIMINACION DE CARTA             //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "Ingresa la posicion de la carta a eliminar:";
            cin >> posEliminar;
            if (listaCartas.eliminar(posEliminar) == Listas<Cartas>::DATO_CORRECTO) {
                cout << "La carta en la posicion " << posEliminar << " ha sido eliminada" << endl;
            } else {
                cout << "No se pudo eliminar la carta, intenta otra ves"<< endl;
            }
            break;
        }
        case 7: {
            cout << "////////////////////////////////////////////////" << endl;
            cout << "//                                            //" << endl;
            cout << "//           BIENVENIDO AL CARRITO            //" << endl;
            cout << "//                 DE COMPRAS                 //" << endl;
            cout << "//                                            //" << endl;
            cout << "//                                            //" << endl;
            cout << "//--------------------------------------------//" << endl;
            cout << "//                                            //" << endl;
            cout << "//        AGREGAR UNA CARTA AL CARRITO        //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;

            //muestran las cartas disponibles
            cout << "////////////////////////////////////////////////" << endl;
            cout << "//                                            //" << endl;
            cout << "//           'CARTAS DISPONIBLES'             //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;
            listaCartas.muestra_datos();
            //como los datos ya estan cargados, no se necesita volver a llamar cargar_cartas_csv

            //se ingresaran las cartas por medio del collector number
            int collector_number;
            cout << "INGRESA EL NUMERO DE COLECCION (collector number) DE LA CARTA QUE QUIERES COMPRAR: ";
            cin >> collector_number;

            // reutilizamos la funcion usada para buscar  por collector number
            int posicionCarta = listaCartas.buscar_por_collector_number(collector_number);
            if (posicionCarta != Listas<Cartas>::ERROR_LISTA) {
                //tomamos la carta de lista cartas y la agregamos a la lista del carrito
                Cartas carta_seleccionada = listaCartas.tomar(posicionCarta);
                carrito_de_compras.agregar_carrito(carta_seleccionada);

                cout << "Carta agregada con exito" << endl;
            } else {
                cout << "No se pudo agregar la carta, intenta otra ves" << endl;
            }

            break;
        }
        case 8:
            cout << "////////////////////////////////////////////////" << endl;
            cout << "//                                            //" << endl;
            cout << "//          'TIENES EN TU CARRITO:'           //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;
            //se muestran las cartas guardadas en el carrito
            carrito_de_compras.mostrar_Carrito();
            break;
        case 9:
            int posEliminar;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "//                                            //" << endl;
            cout << "//           ELIMINAR DEL CARRITO             //" << endl;
            cout << "//                                            //" << endl;
            cout << "////////////////////////////////////////////////" << endl;
            cout << "Ingrese la posicion de la carta que deseas eliminar de tu carrito: ";
            cin >> posEliminar;
            if (carrito_de_compras.eliminar_carta_carrito(posEliminar)) {
                cout << "La carta se ha eliminado del carrito correctamente." << endl;
            } else {
                cout << "No se pudo eliminar la carta del carrito, intenta otra ves" << endl;
            }
            break;
        case 10:
            carrito_de_compras.efectuar_compra();
            cout<<"La compra se ha relaizado de manera exitosa, El carrito se ha vaciado"<< endl;
            break;
        case 0:
            cout << "FIN DEL PROGRAMA" << endl;
            cout << "Alejandro Orozco Romo" << endl;
            break;
        default:
            cout << "OPCION INVALIDA" << endl;
        }
    } while (opc != 0);

}


#endif

