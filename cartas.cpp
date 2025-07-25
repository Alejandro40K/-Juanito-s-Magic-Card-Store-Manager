//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo

#include "cartas.h"
#include "listas.h"


//inicializamos los atributos de Carta para evitar errores
Cartas::Cartas() {
    cart_name = "";
    expansion_symbol = "";
    text_box = "";
    type_line = "";
    power_toughness = "";
    collector_number = 0;
    mana_cost = 0;
    precio_carta = 0;
}

void Cartas::ingresar_carta() {
    cout << "Ingresa el nombre de la carta: ";
    cin >> cart_name;
    cout << "Ingresa el simbolo de expancion: ";
    cin >> expansion_symbol;
    cout << "Ingresa el texto de la carta: ";
    cin >> text_box;
    cout << "Ingresa el tipo de linea: ";
    cin >> type_line;
    cout << "Ingrese la fuerza/resistencia: ";
    cin >> power_toughness;
    cout << "Ingrese el numero de coleccionista: ";
    cin >> collector_number;
    cout << "Ingrese el costo de mana: ";
    cin >> mana_cost;
    cout << "Ingrese el precio de la carta: ";
    cin >> precio_carta;
}

//imprimios los datos de la clase Carta, en el archivo y en la terminal
ostream& operator<<(ostream& salida, Cartas& carta) {
    salida << "Nombre: " << carta.cart_name << "\n"
           << "Simbolo de expansion: " << carta.expansion_symbol << "\n"
           << "Texto: " << carta.text_box << "\n"
           << "Tipo de linea: " << carta.type_line << "\n"
           << "Fuerza/Resistencia: " << carta.power_toughness << "\n"
           << "Numero de coleccionista: " << carta.collector_number << "\n"
           << "Costo de mana: " << carta.mana_cost << "\n"
           << "Precio de la carta: " << carta.precio_carta << "\n";
    return salida;
}
