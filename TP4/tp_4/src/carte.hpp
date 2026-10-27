#ifndef CARTE_HPP_2026
#define CARTE_HPP_2026

class Carte
{
    private :
        Carte();
        Carte(unsigned int);

        unsigned int valeur;
        static unsigned int compteur;

    public : 
        Carte(const Carte &) = delete;
        ~Carte();
        Carte & operator=(const Carte &) = delete;

        unsigned int getValeur() const;
        static unsigned int getCompteur();

    friend class UsineCarte;
};

#endif
