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

Dummy* Dummy::clone(void)
{
    Dummy* clone = new Dummy();
    return (clone);
}
