#include "Propulsores.h"

using namespace std;

Propulsores::Propulsores() {

}

Propulsores::Propulsores(int ppotencia, int pnumserie) {
    potencia = ppotencia;
    numserie = pnumserie;
}

Propulsores::~Propulsores() {

}

//GETTERS
int Propulsores::getPotencia() {
    return potencia;
}

int Propulsores::getNumSerie() {
    return numserie;
}

//SETTERS
void Propulsores::setPotencia(int pote) {
	potencia = pote;
}

void Propulsores::setNumSerie(int ns) {
	numserie = ns;
}