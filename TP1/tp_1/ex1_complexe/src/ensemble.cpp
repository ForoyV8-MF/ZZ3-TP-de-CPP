#include "ensemble.hpp"
#include "algebrique.hpp"

Ensemble::Ensemble(int capa) : vecteur_complexe(vector<Complexe *>(capa)) {}

vector<Complexe *> Ensemble::getVector() const { return vecteur_complexe; }

int Ensemble::size() const { return vecteur_complexe.size(); }

vector<Complexe *>::const_iterator Ensemble::begin() const
{ return vecteur_complexe.begin(); }

vector<Complexe *>::const_iterator Ensemble::end() const
{ return vecteur_complexe.end(); }

void Ensemble::ajouter(Complexe & adding)
{ vecteur_complexe.push_back(&adding); }

Algebrique moyenne(Ensemble & Moyen_age)
{
    int taille = Moyen_age.size();
    double S_re =0; double S_im = 0;

    Algebrique Moyenne(0.0, 0.0);

    if(taille > 0)
    {
        auto that = Moyen_age.begin();
        auto that_end = Moyen_age.end();

        while(that != that_end)
        {
            S_re += (*that)->versAlgebrique().getRe();
            S_im += (*that)->versAlgebrique().getIm();

            that++;
        }

        S_re /= taille;
        S_im /= taille;

        Moyenne.setRe(S_re); Moyenne.setIm(S_im);
    }

    return Moyenne;
}

Algebrique MoyenneAlgebrique::operator()(Ensemble & Assemble)
{ return moyenne(Assemble).versAlgebrique(); }

Polaire MoyennePolaire::operator()(Ensemble & Assemble)
{ return moyenne(Assemble).versPolaire(); }
