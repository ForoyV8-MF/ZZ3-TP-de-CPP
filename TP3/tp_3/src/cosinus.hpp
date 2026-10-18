#ifndef COSINUS_HPP_2026
#define COSINUS_HPP_2026

#include "puissance.hpp"
#include "factorielle.hpp"

// Fonction Cosinus //--------------------------------------------------------------------------------*

template <int N>
class Cosinus
{ public : static inline double valeur(double); };

template <int N>
inline double Cosinus<N>::valeur(double x)
{ return ((Puissance<N>::valeur(-1) * Puissance<2*N>::valeur(x)) / Factorielle<2*N>::valeur) + Cosinus<N-1>::valeur(x); }

template <>
class Cosinus<0>
{ public : static inline double valeur(double) { return 1; } };

// Fonction Sinus //--------------------------------------------------------------------------------*

template <int N>
class Sinus
{ public : static inline double valeur(double); };

template <int N>
inline double Sinus<N>::valeur(double x)
{ return ((Puissance<N>::valeur(-1) * Puissance<2*N+1>::valeur(x)) / Factorielle<2*N+1>::valeur) + Sinus<N-1>::valeur(x); }

template <>
class Sinus<0>
{ public : static inline double valeur(double x) { return x; } };

#endif
