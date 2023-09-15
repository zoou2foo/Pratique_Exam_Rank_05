#include "Warlock.hpp"

Warlock::Warlock(std::string const name, std::string const title) : _name(name), _title(title){
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
	std::map<std::string, ASpell*>::iterator it = this->_spellBook.begin();
	std::map<std::string, ASpell*>::iterator ite = this->_spellBook.end();
	while (it != ite) {
		delete it->second;
		it++;
	}
	this->_spellBook.clear();
	return;
}

Warlock::~Warlock(void) {
	std::cout << this->getName() << ": My job here is done!" << std::endl;
	return;
}

std::string const & Warlock::getName(void) const { return (this->_name);}
std::string const & Warlock::getTitle(void) const { return (this->_title);}

void    Warlock::setTitle(std::string const & title){ this->_title = title;}

void    Warlock::introduce(void) const {
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void    Warlock::learnSpell(ASpell* spell) {
	if (spell) //in case it's null
		this->_spellBook[spell->getName()] = spell->clone();
}

void    Warlock::forgetSpell(std::string spellName) {
	std::map<std::string, ASpell*>::iterator it = this->_spellBook.find(spellName);
	if (it != this->_spellBook.end())
		delete it->second;
	this->_spellBook.erase(spellName);
}

void    Warlock::launchSpell(std::string spellName, const ATarget& target) {
	ASpell* spell = this->_spellBook[spellName]; //on cree une instance ASpell au nom du spell; to retrieve the spell in question
	if (spell) //spell is not NULL
		spell->launch(target);
}