#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell
{
    private:
        Fwoosh(const Fwoosh& copy);
        Fwoosh& operator=(const Fwoosh &rhs);

    public:
        Fwoosh(void);
        ~Fwoosh(void);
        Fwoosh* clone(void);

};

#endif