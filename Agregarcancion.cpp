#include "Agregarcancion.h"
#include <iostream>

Agregarcancion::Agregarcancion() {
    
}

void Agregarcancion::ejecutarAgregarcancion(ReproductorCD* reproductor) {

    // Aca Llamamos al metodo de ReproductorCD para asi poder obtener la lista de los CDs
   
    const std::vector<CD>& listaCds = reproductor->getListaCds();

    //Aca mostramos la lista de los CDs al usuario:

    std::cout << "Lista de CDs:" << std::endl;
    for (int i = 0; i < listaCds.size(); i++) {
        std::cout << i + 1 << ". " << listaCds[i].getNombre() << std::endl;
    }

    // Aca solicitamos al usuario que elija un CD

    int opcionCd;
    std::cout << "Seleccione un CD por número: ";
    std::cin >> opcionCd;

    // Verificamos si la opcion es valida

    if (opcionCd >= 1 && opcionCd <= listaCds.size()) {

        // Aca obtenemos el CD seleccionado

        const CD& cdSeleccionado = listaCds[opcionCd - 1];

        // Aca obtenemos la lista de canciones del CD seleccionado :D

        const std::vector<Cancion>& listaCanciones = cdSeleccionado.getCanciones();

        // Aca mostramos la lista de canciones del CD

        std::cout << "Lista de Canciones en " << cdSeleccionado.getNombre() << ":" << std::endl;
        for (int i = 0; i < listaCanciones.size(); i++) {
            std::cout << i + 1 << ". " << listaCanciones[i].getNombre() << std::endl;
        }

        // Aca solcitamos al usuario que elija una canción

        int opcionCancion;
        std::cout << "Seleccione una cancion por numero: ";
        std::cin >> opcionCancion;

        // Aca verificamos si la opción de la canción es válida

        if (opcionCancion >= 1 && opcionCancion <= listaCanciones.size()) {
            
            const Cancion& cancionSeleccionada = listaCanciones[opcionCancion - 1];

            reproductor->agregarCancionALaCola(cancionSeleccionada);

            std::cout << "Cancion agregada a la cola de reproduccion: " << cancionSeleccionada.getNombre() << std::endl;
        }
        else {
            std::cout << "Opcion de cancion no valida." << std::endl;
        }
    }
    else {
        std::cout << "Opcion de CD no valido." << std::endl;
    }
}



