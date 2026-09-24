#include "polaire.hpp"

Polaire::Polaire() : mod(0), angle(0){}
Polaire::Polaire(double module, double argument) : mod(module), angle(argument) {}
Polaire::Polaire(const Algebrique & comp) : mod(sqrt(comp.getRe()*comp.getRe() + comp.getIm()*comp.getIm())), angle(atan2(comp.getIm(), comp.getRe())) {}

double Polaire::getMod() const { return mod; }
double Polaire::getArg() const { return angle; }

void Polaire::setMod(double module) { mod = module; }
void Polaire::setArg(double argument) { angle = argument; }

void Polaire::afficher(ostream & ss) const
{
    ss << "(mod=" << getMod();
    ss << ";arg=" << getArg();
    ss << ")";
}

Algebrique Polaire::versAlgebrique() const // Ne retourne aucune référence !
{
    Algebrique PolaireVersAlgebrique = Algebrique(*this); // this est un pointeur, *this est une référence
    return PolaireVersAlgebrique;
}

Polaire Polaire::versPolaire() const
{
    Polaire PolaireVersPolaire = Polaire(*this);
    return PolaireVersPolaire;
}
