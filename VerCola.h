#pragma once
#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>

class VerCola {
public:
    VerCola(); // Constructor de la clase

    // M�todo para mostrar la cola de reproducci�n
    void mostrarColaDeReproduccion(const ReproductorCD* reproductor) const;

};
