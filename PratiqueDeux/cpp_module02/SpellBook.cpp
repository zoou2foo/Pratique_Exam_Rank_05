#include "SpellBook.hpp"

SpellBook::SpellBook(void) {
    return;
}
SpellBook::~SpellBook(void) { return; }

void    SpellBook::learnSpell(ASpell* spell){
    if (spell)
        this->_book[spell->getName()] = spell->clone();
}

void    SpellBook::forgetSpell(std::string const & spell){
    std::map<std::string, ASpell*>::iterator it = this->_book.find(spell);
    if (it != this->_book.end())
        delete it->second;
    this->_book.erase(spell);
}

ASpell* SpellBook::createSpell(std::string const & spell){
    //creates and returns it
    std::map<std::string, ASpell*>::iterator it = this->_book.find(spell);
    if (it != this->_book.end())
        return (it->second);
    else
        return (NULL);
}