#ifndef ROTATE_PIVOT_H_2026
#define ROTATE_PIVOT_H_2026

using std::vector;

template <typename T, typename C>
void RotatePivot<T, C>::apply(Ensemble<T> & miazaki, double angular, C & pivoteur)
{
    int taille = miazaki.size();
    vector<T> & spirale = miazaki.getVector();

    if(taille > 0)
    {
        double real; double imaginary;

        Algebrique pivoteur_alg = pivoteur.versAlgebrique();

        double real_p = pivoteur_alg.getRe();
        double imaginary_p = pivoteur_alg.getIm();

        for (T & tournoyé : spirale)
        {
            Algebrique tournoyé_alg = tournoyé.versAlgebrique();

            real = tournoyé_alg.getRe();
            imaginary = tournoyé_alg.getIm();

            tournoyé_alg.setRe((double) cos(angular) * (real - real_p) - sin(angular) * (imaginary - imaginary_p) + real_p);
            tournoyé_alg.setIm((double) cos(angular) * (imaginary - imaginary_p) + sin(angular) * (real - real_p) + imaginary_p);

            Polaire tournoyé_pol = tournoyé_alg.versPolaire();

            tournoyé.setMod(tournoyé_pol.getMod());
            tournoyé.setArg(tournoyé_pol.getArg());
        }
    }
}

template <typename C>
void RotatePivot<Algebrique, C>::apply(Ensemble<Algebrique> & miazaki, double angular, C & pivoteur)
{
    int taille = miazaki.size();
    vector<Algebrique> & spirale = miazaki.getVector();

    if(taille > 0)
    {
        double real; double imaginary;

        Algebrique pivoteur_alg = pivoteur.versAlgebrique();

        double real_p = pivoteur_alg.getRe();
        double imaginary_p = pivoteur_alg.getIm();

        for (Algebrique & tournoyé : spirale)
        {
            real = tournoyé.getRe();
            imaginary = tournoyé.getIm();

            tournoyé.setRe((double) cos(angular) * (real - real_p) - sin(angular) * (imaginary - imaginary_p) + real_p);
            tournoyé.setIm((double) cos(angular) * (imaginary - imaginary_p) + sin(angular) * (real - real_p) + imaginary_p);
        }
    }
}

template<typename C>
void RotatePivot<Algebrique, C>::apply(Ensemble<Algebrique> & miazaki, double angular, const C & pivoteur)
{
    int taille = miazaki.size();
    vector<Algebrique> & spirale = miazaki.getVector();

    if(taille > 0)
    {
        double real; double imaginary;

        Algebrique pivoteur_alg = pivoteur.versAlgebrique();

        double real_p = pivoteur_alg.getRe();
        double imaginary_p = pivoteur_alg.getIm();

        for (Algebrique & tournoyé : spirale)
        {
            real = tournoyé.getRe();
            imaginary = tournoyé.getIm();

            tournoyé.setRe((double) cos(angular) * (real - real_p) - sin(angular) * (imaginary - imaginary_p) + real_p);
            tournoyé.setIm((double) cos(angular) * (imaginary - imaginary_p) + sin(angular) * (real - real_p) + imaginary_p);
        }
    }
}

#endif
