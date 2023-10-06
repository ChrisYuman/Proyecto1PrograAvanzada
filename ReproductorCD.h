#ifndef REPRODUCTORCD_H
#define REPRODUCTORCD_H

#include "CD.h"
#include <vector>
#include <queue> 
#include "Cancion.h" 

class ReproductorCD {
public:
    ReproductorCD();
    void cargarRespaldosDesdeCarpeta(const std::string& carpeta);
    void cargarCdDesdeArchivo(const std::string& nombreArchivo);
    void imprimirDiscos() const;

    int getCantidadCds() const {
        return listaCds.size();
    }

    const CD& getCdPorIndice(int indice) const {
        if (indice >= 0 && indice < listaCds.size()) {
            return listaCds[indice];
        }
        else {
            // Manejar el caso de índice no válido
            throw std::out_of_range("Índice de CD no válido");
        }
    }
    const std::queue<Cancion>& getColaReproduccion() const {
        return colaReproduccion;
    }


    const std::vector<CD>& getListaCds() const;
private:
    std::vector<CD> listaCds;
    std::queue<Cancion> colaReproduccion;
};

#endif
