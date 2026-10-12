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

        for (T & complexe : tournoi)
        {
            Polaire temporaire = complexe;

            angle = temporaire.getArg();
            temporaire.setArg(angle + theta);

            complexe = temporaire;
        }
    }
}

#endif
