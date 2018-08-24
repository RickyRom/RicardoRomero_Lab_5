#include "Avion.h"
#include <string>

using namespace std;

Avion::Avion() {

}

Avion::Avion(string pnombre) {
    nombre = pnombre;
}

Avion::~Avion() {

}

//GETTER
string Avion::getNombre() {
    return nombre;
}

//SETTER
void Avion::setNombre(string n) {
	nombre = n;
}
