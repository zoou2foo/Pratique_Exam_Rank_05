#include "ATarget.hpp"

ATarget::ATarget(void) { return; }
ATarget::ATarget(std::string const & type) : _type(type) { return; }
ATarget::ATarget(const ATarget & copy) {
    *this = copy;
}

ATarget& ATarget::operator=(const ATarget& rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs.getType();
    return (*this);
}

std::string const & ATarget::getType(void) const { return (this->_type);}

void    ATarget::getHitBySpell(const ASpell & spell) const {
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}