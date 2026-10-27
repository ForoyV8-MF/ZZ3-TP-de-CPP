#include "carte.hpp"

unsigned int Carte::compteur = 0;

Carte::Carte() : Carte(0) {}
Carte::Carte(unsigned int value) : valeur(value) { compteur++; }

Carte::~Carte() { compteur--; }

unsigned int Carte::getValeur() const { return valeur; }
unsigned int Carte::getCompteur() { return compteur; }
