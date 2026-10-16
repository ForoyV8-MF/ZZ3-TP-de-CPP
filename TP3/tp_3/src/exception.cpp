// Entetes //---------------------------------------------------------------------------------------
#include "demangle.hpp"
#include "exception.hpp"

// namespace string { std::string; }

ExceptionChaine::ExceptionChaine() : ExceptionChaine("Aucun Argument") {}
ExceptionChaine::ExceptionChaine(const std::string & type) : exception() { message = type; }

const char * ExceptionChaine::what() const noexcept { return message.c_str(); }
