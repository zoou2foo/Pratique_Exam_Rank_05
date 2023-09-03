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
    return (*this);
}

const std::string&  ATarget::getType(void)
{
    return (this->_type);
}

ATarget*    ATarget::clone(void)
{
    ATarget* clone = new ATarget(this->getType());
    return (clone);
}

