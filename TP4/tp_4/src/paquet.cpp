#include "paquet.hpp"

void remplir(paquet_t & pack, UsineCarte & factory)
{
    std::unique_ptr<Carte> card = factory.getCarte();

    while(card != nullptr) 
    { pack.push_back(std::move(card)); card = factory.getCarte(); }
}

std::ostream & operator<<(std::ostream & ss, paquet_t & pack)
{

    //------ Première-Logique------
    // iterator_pack_t that = pack.begin();
    // iterator_pack_t that_end = pack.end();

    // while (that != that_end)
    // {
    //     ss << that->get()->getValeur() << " ";
    //     // ss << (*that)->getValeur() << " ";
    //     that++;
    // }

    //------ Seconde-Logique------
    for (const auto & card : pack)
        ss << card->getValeur() << " ";

    return ss;
}
