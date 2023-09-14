#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;
class ATarget {

    private:
        std::string _type;

    public:
        ATarget(void);
        ATarget(std::string const & type);
        ATarget(const ATarget & copy);
        virtual ~ATarget(void);

        ATarget& operator=(const ATarget& rhs);

        std::string const & getType(void) const;
        virtual ATarget* clone(void) const = 0;
        void getHitBySpell(const ASpell & spell) const;

};

#endif