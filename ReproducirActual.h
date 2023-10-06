#pragma once
#include "Cancion.h"  // Asumiendo que Cancion est� definida en Cancion.h

class ReproducirActual
{
    
        public:
            ReproducirActual();

            // M�todo para establecer la canci�n en reproducci�n
            void establecerCancionEnReproduccion(const Cancion& cancion);

            // M�todo para obtener la canci�n en reproducci�n
            const Cancion& obtenerCancionEnReproduccion() const;

            // M�todo para verificar si hay una canci�n en reproducci�n
            bool hayCancionEnReproduccion() const;

            // M�todo para mostrar la informaci�n de la canci�n en reproducci�n
            void mostrarInformacion() const;

        private:
            Cancion cancionEnReproduccion;
   
};

