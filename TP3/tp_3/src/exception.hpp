// Gardien //---------------------------------------------------------------------------------------
#ifndef ExceptionChaine_HPP_2026
#define ExceptionChaine_HPP_2026

// Classe Exception //--------------------------------------------------------------------------------
class ExceptionChaine : public std::exception
{
    private : std::string message;
    public :
        ExceptionChaine();
        ExceptionChaine(const std::string & type);
        const char * what() const noexcept override;
};

#endif
