#ifndef RESSOURCE_HPP_2026
#define RESSOURCE_HPP_2026

#include <vector>
#include <memory>

class Ressource
{
    private : int stock;
    public :

        Ressource();
        Ressource(int);
        int getStock() const;
        void consommer(int);
};

using ressources_t = std::vector<std::weak_ptr<Ressource>>;

std::ostream & operator<<(std::ostream &, ressources_t &);

#endif
