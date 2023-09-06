#include "Fwoosh.hpp"

Fwoosh::Fwoosh(void) : _name("Fwoosh"), _effects("fwooshed")
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
    Fwoosh* clone = new Fwoosh();
    return (clone);
}