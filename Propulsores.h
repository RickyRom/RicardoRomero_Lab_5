#ifndef PROPULSORES_H
#define PROPULSORES_H

#include <iostream>

using namespace std;

class Propulsores {

    private:
        int potencia;
        int numserie;

    public:
        Propulsores();
        Propulsores(int,int);
        ~Propulsores();

        //GETTERS
        int getPotencia();
        int getNumSerie();

        //SETTERS
        void setPotencia(int);
        void setNumSerie(int);

};
#endif