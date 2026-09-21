#include "complexe.hpp"

ostream & operator<<(ostream & ss, const Complexe & complex)
{
    complex.afficher(ss); // Ne renvoit rien donc faut le faire en deux temps
    return ss;
}
