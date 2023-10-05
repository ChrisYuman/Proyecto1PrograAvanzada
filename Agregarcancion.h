#pragma once

#include "ReproductorCD.h"

class Agregarcancion {
private:
    ReproductorCD& reproductor;

public:
    Agregarcancion(ReproductorCD& reproductor);

    void ejecutar();
};
