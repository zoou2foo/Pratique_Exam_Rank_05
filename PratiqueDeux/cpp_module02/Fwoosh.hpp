#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class ASpell;

class Fwoosh : public ASpell {
    private:

    public:
        Fwoosh();
        ~Fwoosh();
        virtual ASpell* clone(void) const;

};

#endif