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
	this->_book.learnSpell(spell);
}

void    Warlock::forgetSpell(std::string spellName) {
	this->_book.forgetSpell(spellName);
}

void    Warlock::launchSpell(std::string spellName, const ATarget& target) {
	ATarget const *test = 0; //need to create an instance of ATarget to test the reference of target
	//received in param
	if (test == &target) //if reference target equals zero -> get OUT!
		return;
	ASpell* spell = this->_book.createSpell(spellName); //we need an instance of ASpell to createSpell
	//as the function returns ASpell*
	if (spell) //we need to make sure that it's not NULL
		spell->launch(target);
}