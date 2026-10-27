#ifndef CONSOMMATEUR_HPP_2026
#define CONSOMMATEUR_HPP_2026

#include "ressource.hpp"
#include <memory>

class Consommateur
{
    private:
        int besoin;
        std::shared_ptr<Ressource> consommated_ressource;

    public:
        // Consommateur();
        Consommateur(int, std::shared_ptr<Ressource>);

    void puiser();
};

#endif
