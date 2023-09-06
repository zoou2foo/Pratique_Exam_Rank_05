#include "ATarget.hpp"

ATarget::ATarget(void)
{
    return;
}

ATarget::ATarget(std::string type) : _type(type)
{
    return;
}

ATarget::ATarget(const ATarget & copy)
{
    *this = copy;
    return;
}

ATarget::~ATarget(void)
{
    return;
}

ATarget&    ATarget::operator=(const ATarget& rhs)
{
    this->_type = rhs.getType();
    return (*this);
}

const std::string&  ATarget::getType(void) const
{
    return (this->_type);
}

ATarget*    ATarget::clone(void)
{
    ATarget* clone = new ATarget(this->getType());
    return (clone);
}

void    ATarget::getHitBySpell(const ASpell & spell) const
{
    std::cout << this->getType() << " has been " << spell.getEffects() << "!" << std::endl;
}
