#include "Dummy.hpp"

Dummy::Dummy(void) : _type("Target Practice Dummy")
{
    return;
}

Dummy::Dummy(const Dummy& copy)
{
    *this = copy;
}

Dummy::~Dummy(void)
{
    return;
}

Dummy&  Dummy::operator=(const Dummy& rhs)
{
    this->_type = rhs.getType();
    return (*this);
}

Dummy* Dummy::clone(void)
{
    Dummy* clone = new Dummy();
    return (clone);
}
