#pragma once
#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>
class VerCola
{
    public:
        VerCola(ReproductorCD& reproductor); 

        void mostrarCola(); // Declaraci�n de la funci�n para mostrar la cola de reproducci�n

    private:
        ReproductorCD& reproductor; // Miembro para mantener una referencia al reproductor
    
};

