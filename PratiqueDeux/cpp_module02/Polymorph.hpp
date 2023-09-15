#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"

class ASpell;

class Polymorph : public ASpell {
    private:

    public:
        Polymorph(void);
        ~Polymorph(void);
        virtual ASpell* clone(void) const;
};

#endif