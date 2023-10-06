#pragma once
#include "ReproductorCD.h" // Aseg�rate de incluir la clase ReproductorCD
#include "Cancion.h" // Incluye Cancion si es necesario

class VerColaReproduccion
{
    public:
        VerColaReproduccion(ReproductorCD& reproductor); // Declaraci�n del constructor

        void mostrarColaReproduccion(); // Declaraci�n de la funci�n para mostrar la cola de reproducci�n

    private:
        ReproductorCD& reproductor; // Miembro para mantener una referencia al reproductor
};

