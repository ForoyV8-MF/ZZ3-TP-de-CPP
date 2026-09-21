#ifndef ALGEBRIQUE_HPP_2026
#define ALGEBRIQUE_HPP_2026

#include "complexe.hpp"

class Polaire;

class Algebrique : public Complexe
{
    private : double re, im;

    public :

        Algebrique();
        Algebrique(double, double);
        Algebrique(const Polaire &);

        double getRe() const;
        double getIm() const;

        void setRe(double);
        void setIm(double);

        void afficher(ostream &) const override;
};

#endif
