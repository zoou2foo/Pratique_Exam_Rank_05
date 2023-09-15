#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class ASpell;

class Fireball : public ASpell {
    private:

    public:
        Fireball();
        ~Fireball();
        virtual ASpell* clone(void) const;
};

#endif