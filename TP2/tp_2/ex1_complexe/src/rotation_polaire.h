#ifndef ROTATION_POLAIRE_H_2026
#define ROTATION_POLAIRE_H_2026

using std::vector;

template <typename T>
void rotate(Ensemble<T> & tournerdanslevidelevide, double theta)
{
    int taille = tournerdanslevidelevide.size();

    if(taille > 0)
    {
        vector<T> & tournoi = tournerdanslevidelevide.getVector();
        double angle;

        for (T & polaire : tournoi)
        {
            angle = polaire.getArg();
            polaire.setArg(angle + theta);
        }
    }
};

void rotate(Ensemble<Algebrique> & tournaire, double gamma)
{
    int taille = tournaire.size();
    std::cout << "zizi" << std::endl;

    if(taille > 0)
    {
        vector<Algebrique> & tournage = tournaire.getVector();
        double real, imaginary;

        for (Algebrique & algebrique : tournage)
        {
            real = algebrique.getRe();
            imaginary = algebrique.getIm();

            algebrique.setRe((double) real * cos(gamma) - imaginary * sin(gamma));
            algebrique.setIm((double) real * sin(gamma) + imaginary * cos(gamma));
        }
    }
}

#endif
