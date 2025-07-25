//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo
#ifndef NODOS_H
#define NODOS_H


template<typename T>
class Nodos {
public:
    Nodos();
    Nodos(T dato, Nodos* sig = nullptr);
    Nodos* sig;
    T dato;
};

#endif // NODOS_H

