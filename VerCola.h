#pragma once
#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>

class VerCola {
public:
    VerCola(); // Constructor de la clase

    // Método para mostrar la cola de reproducción
    void mostrarColaDeReproduccion(const ReproductorCD* reproductor) const;

};
