#include "ATarget.hpp"

ATarget::ATarget(void) { return; }
ATarget::ATarget(std::string type) : _type(type) { return; }
ATarget::ATarget(ATarget const &copy) { *this = copy; }
ATarget::~ATarget(void) { return ; }

ATarget&	ATarget::operator=(ATarget const &rhs){
	this->_type = rhs.getType();
	return (*this);
}

std::string const &	ATarget::getType(void) const { return (this->_type); }
void				ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << this->getType() << " has been " << spell.getEffects() << std::endl;
}