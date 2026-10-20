#ifndef USINE_CARTE_HPP_2026
#define USINE_CARTE_HPP_2026

#include "carte.hpp"

class UsineCarte
{
    private : int valeur;
    public : 
        UsineCarte();
        std::unique_ptr<Carte> getCarte();
};

#endif
