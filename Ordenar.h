#pragma once
#include "ReproductorCD.h"
#include <vector>

class Ordenar {
public:
    Ordenar();
    static void ordenarPorNombreArtistaAscendente(ReproductorCD* reproductor);
    static void ordenarPorNombreArtistaDescendente(ReproductorCD* reproductor);
    static void ordenarPorNombreCancionAscendente(ReproductorCD* reproductor);
    static void ordenarPorNombreCancionDescendente(ReproductorCD* reproductor);
    static void ordenarPorDuracionAscendente(ReproductorCD* reproductor);
    static void ordenarPorDuracionDescendente(ReproductorCD* reproductor);
};
