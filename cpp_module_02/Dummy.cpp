#include "Dummy.hpp"

Dummy::Dummy(void) : ATarget("Target Practice Dummy")
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
    return (new Dummy());
}
