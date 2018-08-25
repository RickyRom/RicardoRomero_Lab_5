#include "Propulsores.h"

using namespace std;

Propulsores::Propulsores() {

}

Propulsores::Propulsores(int ppotencia, string pnumserie) {
    potencia = ppotencia;
    numserie = pnumserie;
}

Propulsores::~Propulsores() {

}

//GETTERS
int Propulsores::getPotencia() {
    return potencia;
}

string Propulsores::getNumSerie() {
    return numserie;
}

//SETTERS
void Propulsores::setPotencia(int pote) {
	potencia = pote;
}

void Propulsores::setNumSerie(string ns) {
	numserie = ns;
}