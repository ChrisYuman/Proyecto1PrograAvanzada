// Proyecto1PrograAvanzada.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std; 

int main()
{
    cout << "Proyecto 1 programacion avanzada\n" << endl; 
    cout << "--------------------Bienvenido, en esta aplicacion podra almacenar sus CDs para poder reprdocucirlos--------------------" << endl; 
    
    menu1:
    cout << "Menu principal" << endl; 
    cout << "Escoga una de las opciones que se presentan a continuacion" << endl; 
    cout << "1. Cargar respaldos" << endl;
    cout << "2. Reproductor de canciones" << endl;
    cout << "3. Salir del programa" << endl;
    int opcion;
    cin >> opcion; 
    switch (opcion) 
    {
        case 1: 
            system("cls"); //limpiar la pantalla 
            cout << "Aqui podra seleccionar los CDs que desee para poder almacenarlos en el programa\n" << endl;
            break; 
                        case 2:
                        menu2:
                        system("cls"); 
                        cout << "Que desea hacer con sus canciones?" << endl;
                        cout << "1. Agregar cancion" << endl;
                        cout << "2. Ver cola de reproduccion" << endl;
                        cout << "3. Reproducir actual" << endl;
                        cout << "4. Reproducir siguiente" << endl;
                        cout << "5. Ordenar" << endl;
                        cout << "6. Regresar al menu principal" << endl;
                        int opcion2;
                        cin >> opcion2;
                        switch (opcion2){
                            case 1: 
                                cout << "Agregar cancion\n" << endl;

                                //goto menu2; //todavia no se usa
                                break; 
                            case 2:
                                cout << "Ver cola de reproduccion\n" << endl;

                                //goto menu2; //todavia no se usa
                                break;
                            case 3:
                                cout << "Reproducir actual\n" << endl;

                                //goto menu2; //todavia no se usa
                                break;
                            case 4:
                                cout << "Reproducir siguiente\n" << endl;

                                //goto menu2; //todavia no se usa
                                break;
                            case 5:
                                cout << "Ordenar\n" << endl;

                                //goto menu2; //todavia no se usa
                                break;
                            case 6:
                                cout << "Regresar al menu principal\n" << endl;
                                char elegir; 
                                cout << "Desea regresar al menu principal? s=Si, n= No" << endl;
                                cin >> elegir; 
                                if (elegir == 's') {system("cls");  goto menu1; }
                                else { goto menu2; }
                                break;
                        default:
                            goto menu2;
                            break;
                        }
                        break;
        case 3:
            exit(-1);
            break;
        default:
            system("cls");
            goto menu1;
            break;
    }
    


}


