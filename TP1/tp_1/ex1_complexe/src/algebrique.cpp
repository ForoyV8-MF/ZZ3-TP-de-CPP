#include "algebrique.hpp"

Algebrique::Algebrique() : re(0), im(0) {}
Algebrique::Algebrique(double real, double imaginary) : re(real), im(imaginary) {}
Algebrique::Algebrique(const Polaire & pola) : re(pola.getMod() * cos(pola.getArg())), im(pola.getMod() * sin(pola.getArg())) {}
Algebrique::Algebrique(const Algebrique & comp) : re(comp.getRe()), im(comp.getIm()) {}

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

Algebrique Algebrique::versAlgebrique() const
{
    Algebrique AlgebriqueVersAlgebrique = Algebrique(*this);
    return AlgebriqueVersAlgebrique;
}
