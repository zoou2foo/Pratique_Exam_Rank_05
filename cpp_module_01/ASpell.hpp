#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
    protected:
        std::string _name;
        std::string _effects;
        ASpell(void);

    public:
        ASpell(const std::string &name, const std::string &effects);
        ASpell(const ASpell &copy);
        virtual ~ASpell(void);

        ASpell& operator=(const ASpell &rhs);
        std::string const & getName(void) const;
        std::string const & getEffects(void) const;
        virtual ASpell* clone(void) = 0;
        void launch(ATarget const &target) const;
};


#include "ATarget.hpp"
#endif