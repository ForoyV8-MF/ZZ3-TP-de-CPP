#ifndef FACTORIELLE_HPP_2026
#define FACTORIELLE_HPP_2026

// Fonction Factorielle Déclaratifs //--------------------------------------------------------------------------------*
template <int VALUE>
class Factorielle
{ public : static inline double valeur = Factorielle<VALUE-1>::valeur * VALUE; };

template <>
class Factorielle<0> { public : static inline double valeur = 1; };

#endif
