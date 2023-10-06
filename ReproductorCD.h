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

    // Método para agregar una canción a la cola de reproducción
    void agregarCancionALaCola(const Cancion& cancion) {
        colaDeReproduccion.push_back(cancion);
    }

    // Método para obtener la cola de reproducción
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
