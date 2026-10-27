#include "ressource.hpp"

Ressource::Ressource() : stock(0) {}
Ressource::Ressource(int n) : stock(n) {}

int Ressource::getStock() const
{ return stock; }

void Ressource::consommer(int n)
{ if (stock-n >= 0) stock -= n;
  else stock = 0; }

std::ostream & operator<<(std::ostream & ss, ressources_t & shown_ressources)
{
    for(std::weak_ptr<Ressource> r : shown_ressources)
    {
        if (!r.expired())
            ss << r.lock()->getStock() << " ";
        else ss << "- ";
    }

    return ss;
}
