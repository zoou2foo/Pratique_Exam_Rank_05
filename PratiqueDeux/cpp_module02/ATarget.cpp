#include "ATarget.hpp"

ATarget::ATarget(void) { return; }
ATarget::ATarget(std::string const & type) : _type(type) { return; }
ATarget::ATarget(const ATarget & copy) {
    *this = copy;
}

ATarget::~ATarget(void) { return; }

ATarget& ATarget::operator=(const ATarget& rhs) {
    this->_type = rhs.getType();
    return (*this);
}

std::string const & ATarget::getType(void) const { return (this->_type);}

void    ATarget::getHitBySpell(const ASpell & spell) const {
    std::cout << this->_type << " has been " << spell.getEffects() << "!" << std::endl;
}