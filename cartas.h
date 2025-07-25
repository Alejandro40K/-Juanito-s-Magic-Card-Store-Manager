//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo

#ifndef CARTAS_H
#define CARTAS_H
#include <iostream>
#include <string>
#include "nodos.cpp"
using namespace std;



class Cartas {
public:
    /*METODOS*/
    Cartas();
    void ingresar_carta();
    //se declara una funcion sobrecargada para que los objetos de carta puedan visualizarce en un flujo de salida
    friend ostream& operator<<(ostream& salida,  Cartas& carta);

    std::string cart_name;
    std::string expansion_symbol;
    std::string text_box;
    std::string type_line;
    std::string power_toughness;
    int collector_number;
    int mana_cost;
    int precio_carta;
    //private:
};

#endif // CARTAS_H
