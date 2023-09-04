#ifndef WARLOCK_HPP
# define WARLOCK_HPP


#include <iostream>
#include <string>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

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
        std::string _spellBook[];

    public:
        Warlock(std::string name, std::string title); //do I need to add const + &??
        ~Warlock(); //destructor

        std::string getName(void) const; //add const with string?? for both
        std::string getTitle(void) const;
        void    setTitle(std::string title); //const + &???
        void    introduce(void) const;
        void    learnSpell(ASpell* spell);
        void    forgetSpell(std::string spell);
        void    launchSpell(std::string spell, ATarget& target);

};


#endif