//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo

#ifndef CARRITO_COMPRAS_H
#define CARRITO_COMPRAS_H
#include "cartas.h"
#include "listas.h"
#include <iostream>
using namespace std;
class Carrito_Compras
{
public:

    Carrito_Compras();
    //METODOS
    Listas<Cartas>& carrito_compras();
    void agregar_carrito(const Cartas& carta);
    bool eliminar_carta_carrito(int pos);
    int calcular_Total();
    void mostrar_Carrito();
    void efectuar_compra();

private:
    Listas<Cartas> listaCarrito; // Lista de cartas en el carrito
    int precioTotal; // Precio total del carrito
};


#endif // CARRITO_COMPRAS_H
