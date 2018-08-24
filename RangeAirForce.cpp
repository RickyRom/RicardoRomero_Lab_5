#include <iostream>
#include "Avion.h"
#include "Propulsores.h"
#include "Misiles.h"
#include "Piloto.h"

using namespace std;

int main() {
    int opcion;
    do{
       cout<<"Bienvenido a Argye Wings Inc."<<endl;
       cout<<"1.- Agregar Avion"<<endl;
       cout<<"2.- Eliminar Avion"<<endl;
       cout<<"3.- Reporte de Aviones"<<endl;
       cout<<"4.- Salir"<<endl;
       cin>> opcion;

       switch(opcion) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                cout<<"TENGA BUEN DIA!"<<endl;
                break;
       } 
    }while(opcion != 4);
    return 0;
}