#pragma once

#include "ReproductorCD.h"
#include <queue>

class Agregarcancion {
public:
    Agregarcancion(ReproductorCD* reproductor);

    void agregarCancionAReproduccion();
    void mostrarCdsDisponibles();
    void mostrarCancionesDeCd(int indiceCd);

private:
    ReproductorCD* reproductor;
    std::queue<Cancion> colaReproduccion;
};
