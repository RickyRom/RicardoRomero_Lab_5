#ifndef MISILES_H
#define MISILES_H

#include <iostream>

using namespace std;

class Misiles {
    
    private:
        double alcance;
        double radio;

    public:
        Misiles();
        Misiles(double,double);
        ~Misiles();

        //GETTERS
        double getAlcance();
        double getRadio();

        //SETTERS
        void setAlcance(double);
        void setRadio(double);

};
#endif
