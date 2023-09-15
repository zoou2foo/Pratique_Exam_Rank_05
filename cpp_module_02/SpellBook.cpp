#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{
	return;
}

SpellBook::~SpellBook(void)
{
	return;
}

void SpellBook::learnSpell(ASpell* spell)
{
	if (spell)
		this->spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spell)
{
	
	this->spellBook.erase(spell);
}

ASpell*	SpellBook::createSpell(std::string const &spellName)
{
	std::map <std::string, ASpell *>::iterator it = spellBook.find(spellName);
	if (it != spellBook.end())
		return (it->second);
	else
		return (NULL);
}