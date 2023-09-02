#include "Warlock.hpp"

Warlock::Warlock(void)
{
    return;
}

Warlock::Warlock(const Warlock &copy)
{
    *this = copy;
    return;
}

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title)
{
    std::cout << this->getName() << ": This looks like another boring day." << std::endl;
    return;
}

Warlock::~Warlock(void)
{
    std::cout << this->getName() << ": My job here is done!" << std::endl;
    return;
}

Warlock&    Warlock::operator=(const Warlock &rhs)
{
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();
    return (*this);
}

std::string Warlock::getName(void) const
{
    return (this->_name);
}

std::string Warlock::getTitle(void) const
{
    return (this->_title);
}

void    Warlock::setTitle(std::string title)
{
    this->_title = title;
}


void    Warlock::introduce(void) const
{
    std::cout << this->getName() << ": " << "I am " << this->getName() << ", " << this->getTitle() << std::endl;
}