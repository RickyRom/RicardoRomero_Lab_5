#include "Misiles.h"

using namespace std;

Misiles::Misiles() {

}

Misiles::Misiles(double palcance, double pradio) {
    alcance = palcance;
    radio = pradio;
}

Misiles::~Misiles() {

}

//GETTERS
double Misiles::getAlcance() {
    return alcance;
}

double Misiles::getRadio() {
    return radio;
}

//SETTERS
void Misiles::setAlcance(double alcan) {
    alcance = alcan;
}

void Misiles::setRadio(double rad) {
    radio = rad;
}