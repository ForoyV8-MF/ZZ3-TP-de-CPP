#ifndef COMPLEXE_HPP_2026
#define COMPLEXE_HPP_2026

#include <sstream>
#include <cmath>

using std::ostream;

class Algebrique;

class Complexe
{
    // Destructeur default ?
    public : 
    
        virtual void afficher(ostream &) const = 0;
        virtual Algebrique versAlgebrique() const = 0;
        friend ostream & operator<<(ostream &, const Complexe &);
};

#endif
