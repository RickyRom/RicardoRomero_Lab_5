#include "Piloto.h"
#include <string>

using namespace std;

Piloto::Piloto() {

}

Piloto::Piloto(string pnombre, int pedad, int panosexp) {
    nombre = pnombre;
    edad = pedad;
    anosExp = panosexp;
}

Piloto::~Piloto() {

}

//GETTERS
string Piloto::getNombre() {
    return nombre;
}

int Piloto::getEdad() {
    return edad;
}

int Piloto::getAnosExp() {
    return anosExp;
}

//SETTERS
void Piloto::setNombre(string nom) {
    nombre = nom;
}

void Piloto::setEdad(int ed) {
    edad = ed;
}

void Piloto::setAnosExp(int ae) {
    anosExp = ae;
}