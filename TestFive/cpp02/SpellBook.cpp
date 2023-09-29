#include "SpellBook.hpp"

SpellBook::SpellBook(void) { return; }
SpellBook::~SpellBook(void) { 
	// std::map<std::string, ASpell*>::iterator it = this->_book.begin();
	// std::map<std::string, ASpell*>::iterator ite = this->_book.end();
	// while (it != ite)
	// {
	// 	delete it->second;
	// 	it++;
	// }
	// this->_book.clear();
	return; }

void	SpellBook::learnSpell(ASpell* spell){
	if (spell)
		this->_book[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(std::string const &spellName){
	std::map<std::string, ASpell*>::iterator it = this->_book.find(spellName);
	if (it != this->_book.end())
		delete it->second;
	this->_book.erase(spellName);
}

ASpell*	SpellBook::createSpell(std::string const &spellName){
	std::map<std::string, ASpell*>::iterator it = this->_book.find(spellName);
	if (it != this->_book.end())
		return (it->second);
	else
		return (NULL);
}