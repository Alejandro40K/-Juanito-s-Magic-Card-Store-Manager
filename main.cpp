//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo

/*Juanito quiere abrir su tienda de cartas, por lo cuál, necesita empezar con las que ya tiene y puede conseguir, que son cartas de un juego llamado
Magic The Gathering. Para empezar, necesita un programa que le ayude a agilizar la búsqueda de estas cartas y el precio que les pueda poner.
Necesita agregar filtros de búsqueda para sus cartas por la información de estas mismas para agilizar su búsqueda y revisar cuántas tiene en stock,
así como buscar posibles cartas las cuáles no se sabe el nombre correcto pero que le ayude a encontrar información  de estas dependiendo de sus
características.Si quiere buscar cartas con solo X parámetros, mostrar las cartas con esos X parámetros.
También requiere  que haya un listado aparte de las cartas las cuáles pueda ir guardando como si fuese un carrito para un cliente y así tener
el total en precio de ese listado de cartas, a su vez, una función que le haga "efectuar la compra" y descontar del stock de cartas las cartas que se
compraron. OJO que antes de ejercer una compra, debe de haber stock suficiente, por lo que hay que revisar este detalle antes de vender las cartas.
Por el momento, quiere un avance de como podría que se maneje con la consola para ir manejando la información.
También quiere agilizar un poco el stock pudiendo el mismo modificar archivos .csv y así el programa pueda representarlos.*/

//bibliotecas
#include "menu.h"
using namespace std;

//Funcion principal
int main() {
    //objeto de la clase menu
    menu mi_menu;
    // solo se llama a menu
    mi_menu.menu_principal();

    //fin del programa
    return 0;
}
