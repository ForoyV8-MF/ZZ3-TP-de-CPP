#include "paquet.hpp"

void remplir(paquet_t & pack, UsineCarte & factory)
{
    std::unique_ptr<Carte> card = factory.getCarte();

    while(card != nullptr) 
    { pack.push_back(std::move(card)); card = factory.getCarte(); }
}
