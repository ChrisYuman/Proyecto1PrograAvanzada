#pragma once
#include "ReproductorCD.h" //Incluimos el .h
#include "Cancion.h" //Incluimos el .h
#include <iostream>
#include <queue> //Esta libreria sirve para la estructura de datos de cola

class VerCola {
public:
    VerCola(); 

    void mostrarColaDeReproduccion(const ReproductorCD* reproductor) const;

};
