#ifndef CD_H
#define CD_H

#include <string>
#include <vector>
#include "Cancion.h"
#include <stdexcept>


class CD {
public:
    CD(const std::string& nombre);

    void agregarCancion(const Cancion& cancion);

    std::string getNombre() const;
    int getCantidadCanciones() const {
        return canciones.size();
    }
    const std::vector<Cancion>& getCanciones() const;


    const Cancion& getCancionPorIndice(int indice) const {
        if (indice >= 0 && indice < canciones.size()) {
            return canciones[indice];
        }
        else {
            // Manejar el caso de �ndice no v�lido
            throw std::out_of_range("indice de canci�n no valido");
        }
    }
private:
    std::string nombre;
    std::vector<Cancion> canciones;
};

#endif  // CD_H
