#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : ASpell("Fwoosh", "fwooshed")
{
    return;
}

Fwoosh::Fwoosh(const Fwoosh& copy)
{
    *this = copy;
}

Fwoosh::~Fwoosh(void)
{
    return;
}

Fwoosh& Fwoosh::operator=(const Fwoosh& rhs)
{
    this->_name = rhs.getName();
    this->_effects = rhs.getEffects();
    return (*this);
}

Fwoosh* Fwoosh::clone(void)
{
    return (new Fwoosh());
}