#pragma once
#include "ReproductorCD.h" // Asegúrate de incluir la clase ReproductorCD
#include "Cancion.h" // Incluye Cancion si es necesario

class VerColaReproduccion
{
    public:
        VerColaReproduccion(ReproductorCD& reproductor); // Declaración del constructor

        void mostrarColaReproduccion(); // Declaración de la función para mostrar la cola de reproducción

    private:
        ReproductorCD& reproductor; // Miembro para mantener una referencia al reproductor
};

