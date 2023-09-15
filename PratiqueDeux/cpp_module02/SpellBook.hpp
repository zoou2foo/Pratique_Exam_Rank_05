#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <map>

class ASpell;


class SpellBook {
    private:
        SpellBook(const SpellBook &copy);
        SpellBook& operator=(const SpellBook & rhs);
        std::map<std::string, ASpell*> _book;

    public:
        SpellBook(void);
        ~SpellBook(void);

        void    learnSpell(ASpell* spell);
        void    forgetSpell(std::string const & spell);
        ASpell* createSpell(std::string const & spell);
};

#endif