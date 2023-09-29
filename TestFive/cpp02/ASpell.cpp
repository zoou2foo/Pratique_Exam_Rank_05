#include "ASpell.hpp"

ASpell::ASpell(void) { return; }
ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name), _effects(effects) { return; }
ASpell::ASpell(ASpell const &copy) { *this = copy; }
ASpell::~ASpell(void) { return; }

ASpell&	ASpell::operator=(ASpell const &rhs) {
	this->_name = rhs.getName();
	this->_effects = rhs.getEffects();
	return (*this);
}

std::string const &	ASpell::getName(void) const { return (this->_name); }
std::string const &	ASpell::getEffects(void) const { return (this->_effects); }

void	ASpell::launch(ATarget const &target){
	target.getHitBySpell(*this);
}
