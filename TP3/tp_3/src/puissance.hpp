#ifndef PUISSANCE_HPP_2026
#define PUISSANCE_HPP_2026

template <int VALUE>
class Puissance
{ public : static inline double valeur(double); };

template <int VALUE>
double Puissance<VALUE>::valeur(double powerade)
{ return powerade * Puissance<VALUE-1>::valeur(powerade); }

template <>
class Puissance<0>
{ public : static inline double valeur(double) { return 1; } };

#endif
