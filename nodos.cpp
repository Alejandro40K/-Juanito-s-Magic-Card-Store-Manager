//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo

#include "nodos.h"

template<typename T>
Nodos<T>::Nodos() {
    this->sig = nullptr;
}

template<typename T>
Nodos<T>::Nodos(T dato, Nodos* sig) {
    this->dato = dato;
    this->sig = sig;
}

