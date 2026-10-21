#include "usine.hpp"

UsineCarte::UsineCarte() : UsineCarte(52) {}
UsineCarte::UsineCarte(int value_max) : valeur(0), valeur_max(value_max) {}
// UsineCarte::UsineCarte(int value, int value_max) : valeur(value), valeur_max(value_max) {}

std::unique_ptr<Carte> UsineCarte::getCarte()
{
    std::unique_ptr<Carte> UP1(nullptr);

    if(valeur < valeur_max)
    { UP1.reset(new Carte(valeur)); valeur++; }

    return UP1;
}
