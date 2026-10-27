#include "consommateur.hpp"

Consommateur::Consommateur(int need, std::shared_ptr<Ressource> consume)
    : besoin(need), consommated_ressource(consume) {}

void Consommateur::puiser()
{
    if (consommated_ressource != nullptr && consommated_ressource.use_count() != 0)
    {
       consommated_ressource->consommer(besoin);
       if (consommated_ressource->getStock() == 0)
       { consommated_ressource.reset(); }
    }

}
