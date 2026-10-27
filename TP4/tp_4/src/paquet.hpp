#ifndef PAQUET_HPP_2026
#define PAQUET_HPP_2026

#include <memory>
#include <vector>

#include "carte.hpp"
#include "usine.hpp"

using paquet_t = std::vector<std::unique_ptr<Carte>>;
using iterator_pack_t = paquet_t::iterator;

void remplir(paquet_t &, UsineCarte &);

std::ostream & operator<<(std::ostream &, paquet_t &);

#endif
