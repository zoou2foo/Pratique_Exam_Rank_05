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

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title)
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

std::string const & Warlock::getName(void) const
{
    return (this->_name);
}

std::string const & Warlock::getTitle(void) const
{
    return (this->_title);
}

void    Warlock::setTitle(std::string const &title)
{
    this->_title = title;
}


void    Warlock::introduce(void) const
{
    std::cout << this->getName() << ": " << "I am " << this->getName() << ", " << this->getTitle() << std::endl;
}

void    Warlock::learnSpell(ASpell* spell)
{
	this->spellBook.insert(std::pair<std::string, ASpell *>(spell->getName(), spell));
}

void    Warlock::forgetSpell(std::string spell)
{
	this->spellBook.erase(spell);
}

void    Warlock::launchSpell(std::string spellName, ATarget& target)
{
    //do nothing if spell not in the book
    //not sure if I call getHitSpell of target
	ASpell * spell = spellBook[spellName];
	if (spell)
		spell->launch(target);
}