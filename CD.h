#ifndef CD_H //Esto nos sirve para verificar que CD.h no este definido anteriormente en el codigo y asi
#define CD_H // Esto nos sirve para definir el CD.h

#include <string> //Añadimos la libreria string
#include <vector> //Añadimos la libreria de vectores
#include "Cancion.h" // Incluimos el .h
#include <stdexcept> //Esta libreria nos sirvio para validar el indice ya que necesitamos usar la sentencia de out of range 


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
            // Esto es por si en un caso es indice no valido -.-
            throw std::out_of_range("indice de canción no valido");
        }
    }
private:
    std::string nombre;
    std::vector<Cancion> canciones;
};

#endif  // Esto sirve para marcar el final de la seccion o bien de este codigp
