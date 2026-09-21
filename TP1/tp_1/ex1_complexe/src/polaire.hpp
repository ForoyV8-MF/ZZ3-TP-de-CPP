#ifndef POLAIRE_HPP_2026
#define POLAIRE_HPP_2026

#include "complexe.hpp"

class Algebrique;

class Polaire : public Complexe
{
    private : double mod, angle;

    public : 

        Polaire();
        Polaire(double, double);
        Polaire(const Algebrique);

        double getMod() const;
        double getArg() const;

        void setMod(double);
        void setArg(double);

        void afficher(ostream &) const override;
};

#endif
