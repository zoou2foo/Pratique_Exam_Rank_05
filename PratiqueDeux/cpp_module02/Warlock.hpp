#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock {

    private:
        std::string _name;
        std::string _title;
        Warlock(); //default
        Warlock(const Warlock &copy);
        Warlock& operator=(const Warlock& rhs);
        std::map<std::string, ASpell*> _spellBook;
        SpellBook _book;

    public:
        Warlock(std::string const name, std::string const title);
        ~Warlock(); //destructor

        std::string const & getName(void) const;
        std::string const & getTitle(void) const;
        void    setTitle(std::string const & title);
        void    introduce(void) const;

        void    learnSpell(ASpell* spell);
        void    forgetSpell(std::string spellName);
        void    launchSpell(std::string spellName, const ATarget& target);

};


#endif