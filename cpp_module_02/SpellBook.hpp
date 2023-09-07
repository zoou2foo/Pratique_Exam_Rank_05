#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <map>
#include "Warlock.hpp"

class ASpell;

class SpellBook
{
	private:
		SpellBook(const SpellBook &copy);
		SpellBook& operator=(const SpellBook &rhs);
		std::map<std::string, ASpell*> spellBook;

	public:
		SpellBook(void);
		~SpellBook(void);
		void	learnSpell(ASpell* spell);
		void	forgetSpell(std::string const &spell);
		ASpell* createSpell(std::string const &spellName);

};

#endif