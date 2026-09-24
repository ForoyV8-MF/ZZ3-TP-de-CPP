#ifndef ENSEMBLE_HPP_2026
#define ENSEMBLE_HPP_2026

#include "complexe.hpp"

using std::vector;

class Ensemble
{
    private : vector<Complexe *> vecteur_complexe;

    public :

        using const_iterator = vector<Complexe *>::const_iterator;

        Ensemble(int = 0);

        vector<Complexe *> getVector() const;

        int size() const;
        vector<Complexe *>::const_iterator begin() const;
        vector<Complexe *>::const_iterator end() const;

        void ajouter(Complexe &);
};

Algebrique moyenne(Ensemble & Moyen_age);

class MoyenneAlgebrique
{ public : Algebrique operator()(Ensemble &); };

class MoyennePolaire
{ public : Polaire operator()(Ensemble &); };

#endif
