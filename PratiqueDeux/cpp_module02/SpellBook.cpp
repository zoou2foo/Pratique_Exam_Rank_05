#include "SpellBook.hpp"

SpellBook::SpellBook(void) {
	return;
}
SpellBook::~SpellBook(void) { return; }

void    SpellBook::learnSpell(ASpell* spell){
	if (spell)//to make sure the pointer is not NULL
		this->_book[spell->getName()] = spell->clone(); //[we give the key] and then = the clone, we give the value that will go with the key
}

void    SpellBook::forgetSpell(std::string const & spell){
	std::map<std::string, ASpell*>::iterator it = this->_book.find(spell); //need iterator to find the spell sent
	if (it != this->_book.end())//iterator not the end. It means, it found the spell
		delete it->second; //delete the value; it is the ASpell*
	this->_book.erase(spell); //then erase/delete the key
}

ASpell* SpellBook::createSpell(std::string const & spell){
	//creates and returns it
	std::map<std::string, ASpell*>::iterator it = this->_book.find(spell); //iterator to find the spell in the book
	if (it != this->_book.end()) //if not at the end, spell exists
		return (it->second); //return it; the ASpell*
	else
		return (NULL); //otherwise, returns NULL
}