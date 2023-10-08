#ifndef REPRODUCTORCD_H // Esto nos sirve para verificar que ReproductorCD.h no este definido anteriormente en el codigo y asi
#define REPRODUCTORCD_H // Esto nos sirve para definir el ReproductorCD.h

#include "CD.h" //Incluimos el .h
#include <vector> //Incluimos la libreria para usar vectores
#include <queue> //Esta libreria sirve para la estructura de datos de cola
#include "Cancion.h" //Incluimos el .h

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

    // Este es el metodo para agregar una canción a la cola de reproducción
    void agregarCancionALaCola(const Cancion& cancion) {
        colaDeReproduccion.push_back(cancion);
    }

    // Este es el metodo para obtener la cola de reproducción
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

#endif // Esto sirve para marcar el final de la seccion o bien de este codigo

