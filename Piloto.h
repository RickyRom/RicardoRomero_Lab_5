#ifndef PILOTO_H
#define PILOTO_H

#include <iostream>
#include <string>

using namespace std;

class Piloto {

    private:
        string nombre;
        int edad;
        int anosExp;

    public:
        Piloto();
        Piloto(string, int, int);
        ~Piloto();

        //GETTERS
        string getNombre();
        int getEdad();
        int getAnosExp();

        //SETTERS
        void setNombre(string);
        void setEdad(int);
        void setAnosExp(int);

};
#endif