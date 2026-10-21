#ifndef PAQUET_HPP_2026
#define PAQUET_HPP_2026

#include <memory>
#include <vector>

#include "carte.hpp"
#include "usine.hpp"

using paquet_t = std::vector<std::unique_ptr<Carte>>;

void remplir(paquet_t &, UsineCarte &);

#endif
