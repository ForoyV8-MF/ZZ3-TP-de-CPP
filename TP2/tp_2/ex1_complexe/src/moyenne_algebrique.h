#ifndef MOYENNE_ALGEBRIQUE_HPP_2026
#define MOYENNE_ALGEBRIQUE_HPP_2026

template <typename T>
Algebrique moyenne(Ensemble<T> & Moyen_age)
{
    int taille = Moyen_age.size();
    double S_re = 0; double S_im = 0;

    Algebrique Moyenne(0.0, 0.0);

    if(taille > 0)
    {
        for (const T & complex : Moyen_age)
        {
            S_re += complex.versAlgebrique().getRe();
            S_im += complex.versAlgebrique().getIm();
        }

        S_re /= taille;
        S_im /= taille;

        Moyenne.setRe(S_re); Moyenne.setIm(S_im);
    }

    return Moyenne;
};

template <typename T, template <typename> class C>
Algebrique moyenne_generique(const C<T> & LesVisiteurs)
{
    Algebrique Moyenne(0.0, 0.0);
    double taille = LesVisiteurs.size();

    if(taille > 0)
    {
        auto that = LesVisiteurs.begin();
        auto that_end = LesVisiteurs.end();

        while(that != that_end)
        {
            Moyenne += that->versAlgebrique();
            that++;
        }

        Moyenne /= taille;
    }

    return Moyenne;
}

#endif
