#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title){
	std::cout << this->getName() << ": This looks like another boring day." << std::endl;
	return;
}

Warlock::~Warlock(void) {
	std::cout << this->getName() << ": My job here is done!" << std::endl;
	return;
}