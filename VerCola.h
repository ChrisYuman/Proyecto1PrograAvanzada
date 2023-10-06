#pragma once
#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>
class VerCola
{
    public:
        VerCola(ReproductorCD& reproductor); 

        void mostrarCola(); // Declaración de la función para mostrar la cola de reproducción

    private:
        ReproductorCD& reproductor; // Miembro para mantener una referencia al reproductor
    
};

