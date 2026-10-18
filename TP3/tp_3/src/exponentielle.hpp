#ifndef EXPONENTIELLE_H_2026
#define EXPONENTIELLE_H_2026

#include "puissance.hpp"
#include "factorielle.hpp"

template <int N>
class Exponentielle
{ public : static inline double valeur(double); };

template <int N>
inline double Exponentielle<N>::valeur(double x)
{ return (Puissance<N>::valeur(x) / Factorielle<N>::valeur) + Exponentielle<N-1>::valeur(x); }

template <>
class Exponentielle<0>
{ public : static inline double valeur(double) { return 1; } };

#endif
