#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
    private:
        std::string _type;

    public:
        ATarget(void);
        ATarget(std::string type);
        ATarget(const ATarget &copy);
        virtual ~ATarget(void);

        const std::string&  getType(void) const;
        virtual ATarget*    clone(void);
        void    getHitBySpell(const ASpell& spell);
        void    launch(const ATarget& target);

};

#endif