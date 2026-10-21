#ifndef USINE_CARTE_HPP_2026
#define USINE_CARTE_HPP_2026

#include <memory>
#include "carte.hpp"

class UsineCarte
{
    private : int valeur; int valeur_max;
    public : 
        UsineCarte();
        UsineCarte(int);
        // UsineCarte(int, int);
        
        UsineCarte(const UsineCarte &) = delete;
        UsineCarte & operator=(const UsineCarte &) = delete;

        std::unique_ptr<Carte> getCarte();
};

#endif
