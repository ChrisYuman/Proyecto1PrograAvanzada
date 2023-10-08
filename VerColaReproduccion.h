#pragma once
#include "ReproductorCD.h" //Incluimos el .h
#include "Cancion.h" //Incluimos el .h

class VerColaReproduccion
{
    public:
        VerColaReproduccion(ReproductorCD& reproductor); // Declaraci�n del constructor

        void mostrarColaReproduccion(); // Declaraci�n de la funci�n para mostrar la cola de reproducci�n

    private:
        ReproductorCD& reproductor; // Este es el miembro para mantener una referencia al reproductor
};

