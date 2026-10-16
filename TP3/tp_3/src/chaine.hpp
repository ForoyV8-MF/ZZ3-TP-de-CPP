// Gardien //---------------------------------------------------------------------------------------
#ifndef CHAINE_H_2026
#define CHAINE_H_2026

#include "demangle.hpp"
#include "exception.hpp"

// Fonction Chaîne //--------------------------------------------------------------------------------*
std::string chaine();
template <typename T> std::string chaine(T);

template <> std::string chaine(std::string chaine);
template <> std::string chaine<int>(int);
template <> std::string chaine<double>(double triple);

template <typename HEAD, typename... TYPES> std::string chaine(HEAD teté, TYPES... args);

std::string chaine() { return ""; }

template <typename T>
std::string chaine(T)
{
    std::string nom_type = demangle(typeid(T).name());

    // if(nom_type != "string")
        throw ExceptionChaine("Conversion en chaine impossible pour '" + nom_type + "'");
}

template <>
std::string chaine(std::string chaine)
{ return chaine; }

template <>
std::string chaine<int>(int hint)
{
    std::stringstream string_o;
    string_o << hint;
    return string_o.str();
}

template <>
std::string chaine<double>(double triple)
{ return std::to_string(triple); }

template <typename HEAD, typename... TYPES>
std::string chaine(HEAD teté, TYPES... args)
{
    std::stringstream string_o;
    string_o << chaine(teté) << " " << chaine(args...);
    return string_o.str();
}

#endif
