#include "usine.hpp"

UsineCarte::UsineCarte() : valeur(0) {}

std::unique_ptr<Carte> UsineCarte::getCarte()
{
    std::unique_ptr<Carte> UP1(nullptr);

    if(valeur <= 51)
    { UP1.reset(new Carte(valeur)); valeur++; }

    return UP1;
}
