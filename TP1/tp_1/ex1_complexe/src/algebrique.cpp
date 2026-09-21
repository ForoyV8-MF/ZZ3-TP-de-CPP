#include "algebrique.hpp"

Algebrique::Algebrique() : re(0), im(0) {}
Algebrique::Algebrique(double real, double imaginary) : re(real), im(imaginary) {}
Algebrique::Algebrique(const Polaire & pola) : re()

double Algebrique::getRe() const { return re; }
double Algebrique::getIm() const { return im; }

void Algebrique::setRe(double real) { re = real; }
void Algebrique::setIm(double imaginary) { im = imaginary; }

void Algebrique::afficher(ostream & ss) const
{
    ss << "(re="; ss << getRe();
    ss << ";im="; ss << getIm();
    ss << ")";
}
