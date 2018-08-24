#ifndef AVION_H
#define AVION_H

#include <iostream>
#include <string>

using namespace std;

class Avion {

    private:
        string nombre;

    public:
        Avion();
        Avion(string);
        ~Avion();
        
        //GETTER
        string getNombre();

        //SETTER
        void setNombre(string);

};
#endif