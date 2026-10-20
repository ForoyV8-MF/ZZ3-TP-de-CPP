#ifndef CARTE_HPP_2026
#define CARTE_HPP_2026

#include <memory>

class Carte
{
    private : unsigned int valeur;
    public : 
        Carte();
        Carte(unsigned int);
        unsigned int getValeur() const;
};

#endif
