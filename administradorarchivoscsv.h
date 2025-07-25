//JUANITO EMPRENDEDOR
//Alejandro Orozco Romo

#ifndef ADMINISTRADORARCHIVOSCSV_H
#define ADMINISTRADORARCHIVOSCSV_H
#include "listas.h"
#include "listas.cpp"

using namespace std;


class AdministradorArchivosCSV {
public:
    //metodos
    void guardar_cartas_csv(Listas<Cartas>& listaCartas);
    Listas<Cartas> cargar_cartas_csv();

};

#endif

