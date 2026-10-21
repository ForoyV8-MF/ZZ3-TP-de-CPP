#ifndef CARTE_HPP_2026
#define CARTE_HPP_2026

class Carte
{
    private :
        Carte();
        Carte(unsigned int);

        unsigned int valeur;

    public : 
        Carte(const Carte &) = delete;
        Carte & operator=(const Carte &) = delete;

        unsigned int getValeur() const;

    friend class UsineCarte;
};

#endif
