#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title){
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
	return;
}

Warlock::~Warlock(void) {
	std::cout << this->getName() << ": My job here is done!" << std::endl;
	return;
}

std::string const & Warlock::getName(void) const { return (this->_name); }
std::string const & Warlock::getTitle(void) const { return (this->_title); }
void				Warlock::setTitle(std::string const &title) { this->_title = title; }

void				Warlock::introduce(void) const {
	std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!" << std::endl;
}

void				Warlock::learnSpell(ASpell* spell){
	this->_book.learnSpell(spell);
}

void				Warlock::forgetSpell(std::string const &spellName){
	this->_book.forgetSpell(spellName);
}

void				Warlock::launchSpell(std::string spellName, ATarget const &target){
	ATarget const *testRef = 0;
	if (testRef == &target)
		return;
	ASpell *test = this->_book.createSpell(spellName);
	if (test)
		test->launch(target);
}