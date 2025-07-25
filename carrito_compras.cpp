//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo
#include "carrito_compras.h"
#include "listas.cpp"
#include <iostream>


using namespace std;

Carrito_Compras::Carrito_Compras() {

}

void Carrito_Compras::agregar_carrito(const Cartas& carta) {
    listaCarrito.insertar(carta);
    //se acutualiza el precio total cada ves que agregas una carta al carrito
    precioTotal += carta.precio_carta;
}

void Carrito_Compras::mostrar_Carrito() {
    for (int i = 0; i < listaCarrito.tamano(); ++i) {
        cout << "Carta " << i+1 << ": " << listaCarrito.tomar(i).cart_name << " - Precio: $" << listaCarrito.tomar(i).precio_carta << endl;
    }
    cout << "Precio total del carrito: $" << calcular_Total() << endl;
}

int Carrito_Compras::calcular_Total() {
    int precioTotal = 0;
    for (int i = 0; i < listaCarrito.tamano(); ++i) {
        precioTotal += listaCarrito.tomar(i).precio_carta;
    }
    return precioTotal;
}

bool Carrito_Compras::eliminar_carta_carrito(int pos) {
    if (pos >= 0 && pos < listaCarrito.tamano()) {
        Cartas carta_eliminada = listaCarrito.tomar(pos);
        listaCarrito.eliminar(pos);
        //actualizacion del precio del carrito
        precioTotal -= carta_eliminada.precio_carta;
        return 1;
    } else {
        return 0;
    }
}

//se utiliza purgar para que vacie la lista del carrito de compras al finalizar la compra
void Carrito_Compras::efectuar_compra(){
    listaCarrito.purgar();
}
