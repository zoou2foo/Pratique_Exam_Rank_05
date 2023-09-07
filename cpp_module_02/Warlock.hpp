#ifndef WARLOCK_HPP
# define WARLOCK_HPP


#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "SpellBook.hpp"
#include "Polymorph.hpp"
#include "Fireball.hpp"


class ASpell;
class ATarget;

class Warlock
{
    private:
        std::string _name;
        std::string _title;
        Warlock(); //default
        Warlock(const Warlock &copy); //by copy
        Warlock& operator=(const Warlock &rhs);
        std::map <std::string, ASpell *> spellBook;
        SpellBook book;

    public:
        Warlock(std::string const &name, std::string const &title); //do I need to add const + &??
        ~Warlock(); //destructor

        std::string const& getName(void) const; //add const with string?? for both
        std::string const& getTitle(void) const;
        void    setTitle(std::string const &title); //const + &???
        void    introduce(void) const;
        void    learnSpell(ASpell* spell);
        void    forgetSpell(std::string spell);
        void    launchSpell(std::string spellName, ATarget& target);

};


#endif