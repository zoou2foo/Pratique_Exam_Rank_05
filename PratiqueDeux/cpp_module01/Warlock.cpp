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
	if (spell) //need to check that the pointer is NOT null
		this->_spellBook[spell->getName()] = spell->clone(); //in our container, a key becomes the name of the spell and the value associated with it is a copy of ASpell.
}

void    Warlock::forgetSpell(std::string spellName) {
	std::map<std::string, ASpell*>::iterator it = this->_spellBook.find(spellName); //iterator to find if spell is in the container
	if (it != this->_spellBook.end()) //if iterator is NOT at the end; it found the spell
		delete it->second; //delete the value, ASpell*
	this->_spellBook.erase(spellName); //then, erase/delete the key, spellName
}

void    Warlock::launchSpell(std::string spellName, const ATarget& target) {
	ASpell* spell = this->_spellBook[spellName]; //we create an instance of ASpell by associating it with the key(of spellName) from our map container
	if (spell) //to make sure that spell is not NULL or empty
		spell->launch(target); //then, we can launch the spell on the target received
}