#pragma once
#include "ReproductorCD.h" //Incluimos el .h
#include "Cancion.h" //Incluimos el .h

class VerColaReproduccion
{
    public:
        VerColaReproduccion(ReproductorCD& reproductor); // Declaración del constructor

        void mostrarColaReproduccion(); // Declaración de la función para mostrar la cola de reproducción

    private:
        ReproductorCD& reproductor; // Este es el miembro para mantener una referencia al reproductor
};

