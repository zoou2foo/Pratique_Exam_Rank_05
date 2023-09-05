#include "ASpell.hpp"

ASpell::ASpell(void)
{
    return;
}

ASpell::ASpell(const std::string &name, const std::string &effects) : _name(name), _effects(effects)
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
    this->_name = rhs.getName();
    this->_effects = rhs.getEffects();
    return (*this);
}

std::string const & ASpell::getName(void) const
{
    return (this->_name);
}

std::string const & ASpell::getEffects(void) const
{
    return (this->_effects);
}

/*Pure method!*/
// ASpell* ASpell::clone(void) 
// {
//     ASpell* clone = new ASpell(this->getName(), this->getEffects());
//     return (clone);
// }

void    ASpell::launch(ATarget const &target) const
{
    target.getHitBySpell((*this));
}