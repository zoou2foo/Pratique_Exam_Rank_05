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
    return (*this);
}

Fwoosh* Fwoosh::clone(void)
{
    Fwoosh* clone = new Fwoosh();
    return (clone);
}