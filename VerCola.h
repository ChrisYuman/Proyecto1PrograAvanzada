#pragma once
#include "ReproductorCD.h"
#include "Cancion.h"
#include <iostream>
#include <queue>
class VerCola
{
        public:
            VerCola(ReproductorCD* reproductor);
            void mostrarColaYUltimaCancionAgregada(const Cancion& ultimaCancionAgregada);

        private:
            ReproductorCD* reproductor;
    
};

