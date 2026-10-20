#include "carte.hpp"

Carte::Carte() : Carte(0) {}
Carte::Carte(unsigned int value) : valeur(value) {}

unsigned int Carte::getValeur() const { return valeur; }
