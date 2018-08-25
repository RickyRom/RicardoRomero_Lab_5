#include <iostream>
#include "Avion.h"
#include "Propulsores.h"
#include "Misiles.h"
#include "Piloto.h"
#include <vector>

using namespace std;

int main() {
    vector<Avion*> VecAvion;
    Avion* avi;
    vector<Propulsores*> VecPropul;
    Propulsores* prop;
    vector<Misiles*> VecMisil;
    Misiles* misi;
    vector<Piloto*> VecPiloto;
    Piloto* pilo;

    int opcion;
    do{
       cout<<"Bienvenido a Argye Wings Inc."<<endl;
       cout<<"1.- Agregar Avion"<<endl;
       cout<<"2.- Eliminar Avion"<<endl;
       cout<<"3.- Agregar Propulsor"<<endl;
       cout<<"4.- Eliminar Propulsor"<<endl;
       cout<<"5.- Agregar Misil"<<endl;
       cout<<"6.- Eliminar Misil"<<endl;
       cout<<"7.- Agregar Piloto"<<endl;
       cout<<"8.- Eliminar Piloto"<<endl;
       cout<<"9.- Reporte de Aviones"<<endl;
       cout<<"10.- Salir"<<endl;
       cin>> opcion;

       switch(opcion) {
            case 1:{
                string nombre;

                cout<<"Ingrese el Nombre del Avion: "<<endl;
                cin>> nombre;

                avi = new Avion(nombre);
                VecAvion.push_back(avi);

                break;
            }
            case 2: {
                if(VecAvion.empty()) {
                    cout<<"El vector esta vacio"<<endl;
                    break;
                }
                int opc;
                for(int i = 0; i < VecAvion.size(); i++){
                    cout<<VecAvion[i] -> getNombre() <<endl;
                }
                cout<<"Cual quiere Eliminar: "<<endl;
                cin>>opc;

                VecAvion.erase(VecAvion.begin()+opc);
                break;
            }
            case 3: {
                int potencia;
                string numserie;

                cout<<"Ingrese la potencia del propulsor: "<<endl;
                cin>> potencia;
                cout<<"Ingrese una letra y un numero entre 1-1000: "<<endl;
                cin>> numserie;

                if(potencia < 30 || potencia > 50) {
                    cout<<"se excedió del limite de potencia"<<endl;
                }else{
                    
                }

                prop = new Propulsores(potencia,numserie);
                VecPropul.push_back(prop);

                break;
            }
            case 4: {
                if(VecPropul.empty()) {
                    cout<<"El vector esta vacio"<<endl;
                    break;
                }
                int opc;
                for(int i = 0; i < VecPropul.size(); i++){
                    cout<<VecPropul[i] -> getPotencia() <<endl;
                    cout<<VecPropul[i] -> getNumSerie() <<endl;

                }
                cout<<"Cual quiere Eliminar: "<<endl;
                cin>>opc;

                VecPropul.erase(VecPropul.begin()+opc);
                break;
            }
            case 5: {
                double alcance;
                double radio;

                cout<<"Ingrese el alcance en metros: "<<endl;
                cin>> alcance;
                cout<<"Ingrese el radio de destrucción en metros: "<<endl;
                cin>> radio;

                misi = new Misiles(alcance,radio);
                VecMisil.push_back(misi);

                break;
            }
            case 6: {
                if(VecMisil.empty()) {
                    cout<<"El vector esta vacio"<<endl;
                    break;
                }
                int opc;
                for(int i = 0; i < VecMisil.size(); i++){
                    cout<<VecMisil[i] -> getAlcance() <<endl;
                    cout<<VecMisil[i] -> getRadio() <<endl;

                }
                cout<<"Cual quiere Eliminar: "<<endl;
                cin>>opc;

                VecMisil.erase(VecMisil.begin()+opc);
                break;
            }
            case 7: {
                string nombre;
                int edad;
                int anosExp;

                cout<<"Ingrese el nombre del piloto: "<<endl;
                cin>> nombre;
                cout<<"Ingrese la edad del piloto: "<<endl;
                cin>>edad;
                cout<<"Ingrese los años de experiencia del piloto: "<<endl;
                cin>> anosExp;

                pilo = new Piloto(nombre,edad,anosExp);
                VecPiloto.push_back(pilo);

                break;
            }
            case 8: {
                if(VecPiloto.empty()) {
                    cout<<"El vector esta vacio"<<endl;
                    break;
                }
                int opc;
                for(int i = 0; i < VecPiloto.size(); i++){
                    cout<<VecPiloto[i] -> getNombre() <<endl;

                }
                cout<<"Cual quiere Eliminar: "<<endl;
                cin>>opc;

                VecPiloto.erase(VecPiloto.begin()+opc);
                break;
            }
            case 9: {
                cout<<"------REPORTE TOTAL------"<<endl;
                cout<<"AVIONES: "<<endl;
                 for(int i = 0; i < VecAvion.size(); i++){
                    cout<<"Nombre: "<<VecAvion[i] -> getNombre() <<endl;
                }

                cout<<"PROPULSORES: "<<endl;
                for(int i = 0; i < VecPropul.size(); i++){
                    cout<<"Numero Serie: "<<VecPropul[i] -> getNumSerie() <<endl;
                }

                cout<<"MISILES: "<<endl;
                for(int i = 0; i < VecMisil.size(); i++){
                    cout<<"Alcance: "<<VecMisil[i] -> getAlcance() <<endl;
                }
                
                cout<<"PILOTOS: "<<endl;
                for(int i = 0; i < VecPiloto.size(); i++){
                    cout<<"Nombre: "<<VecPiloto[i] -> getNombre() <<endl;
                }

                break;
            }
            case 10:
                cout<<"TENGA BUEN DIA!"<<endl;
                break;
       } 
    }while(opcion != 10);
    return 0;
}