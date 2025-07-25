//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo
#include "cartas.h"
#include "listas.h"
#include <iostream>

template<typename T>
Listas<T>::Listas() {
    primero = nullptr;
    tam = 0;
}

template<typename T>
bool Listas<T>::esta_vacia() {
    return primero == nullptr;
}

template<typename T>
int Listas<T>::tamano() {
    return tam;
}

template<typename T>
int Listas<T>::insertar(T dato) {
    if (esta_vacia()) {
        crea_primer_nodo(dato);
        return DATO_CORRECTO;
    }
    Nodos<T>* nuevo = new Nodos<T>(dato);
    ultimo_nodo()->sig = nuevo;
    tam++;
    return DATO_CORRECTO;
}

template<typename T>
void Listas<T>::purgar() {
    //se purgara los nodos hasta que el el ultimo nodo apunte NULL
    while (primero != nullptr) {
        Nodos<T>* temp = primero;
        primero = primero->sig;
        delete temp;
    }
    ultimo = nullptr;
}

template<typename T>
int Listas<T>::eliminar(int pos) {
    if (esta_vacia()) {
        return ERROR_LISTA;
    }
    if (!pos_correcta(pos)) {
        return ERROR_LISTA;
    }
    if (pos == 0) {
        Nodos<T>* aux = primero;
        primero = primero->sig;
        delete aux;
    } else {
        Nodos<T>* anterior = nodo_en_pos(pos - 1);
        Nodos<T>* aEliminar = anterior->sig;
        anterior->sig = aEliminar->sig;
        delete aEliminar;
    }
    tam--;
    return DATO_CORRECTO;
}

template<typename T>
T Listas<T>::tomar(int pos) {
    if (esta_vacia() || !pos_correcta(pos)) {
        return T();
    }
    return nodo_en_pos(pos)->dato;
}

template<typename T>
void Listas<T>::muestra_datos() {
    Nodos<T>* aux = primero;
    while (aux != nullptr) {
        cout << aux->dato << endl;
        aux = aux->sig;
    }
}

template<typename T>
Nodos<T>* Listas<T>::ultimo_nodo() {
    Nodos<T>* aux = primero;
    while (aux->sig != nullptr) {
        aux = aux->sig;
    }
    return aux;
}

template<typename T>
int Listas<T>::pos_correcta(int pos) {
    return pos >= 0 && pos < tam;
}

template<typename T>
Nodos<T>* Listas<T>::nodo_en_pos(int pos) {
    Nodos<T>* aux = primero;
    for (int i = 0; i < pos; i++) {
        aux = aux->sig;
    }
    return aux;
}

template<typename T>
void Listas<T>::crea_primer_nodo(T dato) {
    Nodos<T>* primero = new Nodos<T>(dato);
    this->primero = primero;
    tam++;
}



//Inicializacion de las funciones para la busqueda de cartas:

template<typename T>
int Listas<T>::buscar_por_collector_number(int collector_number) {
    Nodos<T>* aux = primero;
    //se recorre la lista hasta que se encuentre un dato igual a collector number
    int i = 0;
    while (aux != nullptr) {
        if (aux->dato.collector_number == collector_number) {
            cout << aux->dato << endl;
            return i;
        }
        aux = aux->sig;
        i++;
    }
    return ERROR_LISTA;
}

template<typename T>
int Listas<T>::buscar_por_type_line(const std::string& type_line) {
    Nodos<T>* aux = primero;
    //se recorre la lista hasta que se encuentre un dato igual a type line
    int i = 0;
    while (aux != nullptr) {
        if (aux->dato.type_line == type_line) {
            cout << aux->dato << endl;
            return i;
        }
        aux = aux->sig;
        i++;
    }
    return ERROR_LISTA;
}

template<typename T>
int Listas<T>::buscar_por_nombre(const std::string& nombre) {
    Nodos<T>* aux = primero;
    //se recorre la lista hasta que se encuentre un dato igual al nombre de la carta
    int i = 0;
    while (aux != nullptr) {
        if (aux->dato.cart_name == nombre) {
            cout << aux->dato << endl;
            return i;
        }
        aux = aux->sig;
        i++;
    }
    return ERROR_LISTA;
}


