//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo
#ifndef LISTAS_H
#define LISTAS_H
#include "nodos.h"
#include <fstream>
#include <sstream>

template <typename T>
class Listas {
public:

    //ENUMERADOR
    enum Resultado {
        ERROR_LISTA = -1,
        DATO_CORRECTO = 1
    };

    Listas();


    //METODOS
    int tam;
    int pos_correcta(int pos);
    Nodos<T>* primero;
    Nodos<T>* ultimo;
    Nodos<T>* ultimo_nodo();
    Nodos<T>* nodo_en_pos(int pos);

    //Funciones para busqueda de las cartas
    int buscar_por_nombre(const std::string& nombre);
    int buscar_por_collector_number(int collector_number);
    int buscar_por_type_line(const std::string& type_line);
    void crea_primer_nodo(T dato);

    //ATRIBUTOS
    bool esta_vacia();
    int tamano();
    int insertar(T dato);
    int eliminar(int pos);
    T tomar(int pos);
    void muestra_datos();
    void purgar();
};

#endif // LISTAS_H
