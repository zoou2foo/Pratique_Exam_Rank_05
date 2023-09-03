#include "ASpell.hpp"

ASpell::ASpell(void)
{
    return;
}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{
    return;
}

ASpell::ASpell(const ASpell& copy)
{
    *this = copy;
}

ASpell::~ASpell(void)
{
    return;
}

ASpell& ASpell::operator=(const ASpell& rhs)
{
    return (*this);
}

std::string ASpell::getName(void) const
{
    return (this->_name);
}

std::string ASpell::getEffects(void) const
{
    return (this->_effects);
}

ASpell* ASpell::clone(void)
{
    ASpell* clone = new ASpell(this->getName(), this->getEffects());
    return (clone);
}