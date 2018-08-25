#ifndef PROPULSORES_H
#define PROPULSORES_H

#include <iostream>

using namespace std;

class Propulsores {

    private:
        int potencia;
        string numserie;

    public:
        Propulsores();
        Propulsores(int,string);
        ~Propulsores();

        //GETTERS
        int getPotencia();
        string getNumSerie();

        //SETTERS
        void setPotencia(int);
        void setNumSerie(string);

};
#endif