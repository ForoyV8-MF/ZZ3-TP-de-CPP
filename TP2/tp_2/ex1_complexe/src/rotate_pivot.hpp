#ifndef ROTATE_PIVOT_HPP_2026
#define ROTATE_PIVOT_HPP_2026

#include "ensemble.hpp"

template <typename T, typename C>
class RotatePivot
{ public : static void apply(Ensemble<T> &, double, C &); };

template<typename C>
class RotatePivot<Algebrique, C>
{
    public :
        static void apply(Ensemble<Algebrique> &, double, C &);
        static void apply(Ensemble<Algebrique> &, double, const C &);
};

#include "rotate_pivot.h"

#endif
