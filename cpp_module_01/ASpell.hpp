#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;
class ASpell
{
    private:
        std::string _name;
        std::string _effects;
    
    public:
        ASpell(void);
        ASpell(std::string name, std::string effects);
        ASpell(const ASpell &copy);
        virtual ~ASpell(void);

        ASpell& operator=(const ASpell &rhs);
        std::string getName(void) const;
        std::string getEffects(void) const;
        virtual ASpell* clone(void);
        void launch(const ATarget& target);
};

#endif