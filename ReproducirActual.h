#pragma once
#include "Cancion.h"  // Asumiendo que Cancion está definida en Cancion.h

class ReproducirActual
{
    
        public:
            ReproducirActual();

            // Método para establecer la canción en reproducción
            void establecerCancionEnReproduccion(const Cancion& cancion);

            // Método para obtener la canción en reproducción
            const Cancion& obtenerCancionEnReproduccion() const;

            // Método para verificar si hay una canción en reproducción
            bool hayCancionEnReproduccion() const;

            // Método para mostrar la información de la canción en reproducción
            void mostrarInformacion() const;

        private:
            Cancion cancionEnReproduccion;
   
};

