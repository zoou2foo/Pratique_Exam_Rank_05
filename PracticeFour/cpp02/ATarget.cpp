#include "ATarget.hpp"

ATarget::ATarget(void) { return; }
ATarget::ATarget(std::string const &type) : _type(type) { return; }
ATarget::ATarget(ATarget const &copy) { *this = copy; }
ATarget::~ATarget(void) { return; }

std::string const & ATarget::getType(void) const { return (this->_type); }
ATarget&	ATarget::operator=(ATarget const &rhs) {
	this->_type = rhs.getType();
	return (*this);
}

void	ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}