#ifndef ENSEMBLE_HPP_2026
#define ENSEMBLE_HPP_2026

#include "complexe.hpp"

using std::vector;

template <typename T>
class Ensemble
{
    private : vector<T> vecteur_complexe;

    public :

        using const_iterator = typename vector<T>::const_iterator;

        Ensemble(int = 0);

        vector<T> getVector() const;

        int size() const;
        const_iterator begin() const;
        const_iterator end() const;

        void ajouter(T);
};

template <typename T>
Ensemble<T>::Ensemble(int capa) : vecteur_complexe(vector<T>(capa)) {}

template <typename T>
vector<T> Ensemble<T>::getVector() const { return vecteur_complexe; }

template <typename T>
int Ensemble<T>::size() const { return vecteur_complexe.size(); }

template <typename T>
typename Ensemble<T>::const_iterator Ensemble<T>::begin() const
{ return vecteur_complexe.begin(); }

template <typename T>
typename Ensemble<T>::const_iterator Ensemble<T>::end() const
{ return vecteur_complexe.end(); }

template <typename T>
void Ensemble<T>::ajouter(T adding)
{ vecteur_complexe.push_back(adding); }

#endif
