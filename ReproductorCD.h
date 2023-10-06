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
            throw std::out_of_range("indice de CD no valido");
        }
    }
    const std::queue<Cancion>& getColaReproduccion() const {
        return colaReproduccion;
    }

    // M�todo para agregar una canci�n a la cola de reproducci�n
    void agregarCancionALaCola(const Cancion& cancion) {
        colaDeReproduccion.push_back(cancion);
    }

    // M�todo para obtener la cola de reproducci�n
    const std::vector<Cancion>& getColaDeReproduccion() const {
        return colaDeReproduccion;
    }

    const std::vector<CD>& getListaCds() const;
    void setColaDeReproduccion(const std::vector<Cancion>& nuevaCola) {
        colaDeReproduccion = nuevaCola;
    }
private:
    std::vector<CD> listaCds;
    std::queue<Cancion> colaReproduccion;
    std::vector<Cancion> colaDeReproduccion;
};

#endif
