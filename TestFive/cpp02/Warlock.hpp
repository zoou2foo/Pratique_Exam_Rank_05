#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class ASpell;
class SpellBook;

class Warlock {
	private:
		std::string	_name;
		std::string	_title;
		Warlock(void);
		Warlock(Warlock const &copy);
		Warlock&			operator=(Warlock const &rhs);
		//std::map<std::string, ASpell*> _spellBook;
		SpellBook _book;

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;
		void				setTitle(std::string const &title);
		void				introduce(void) const;
		void				learnSpell(ASpell* spell);
		void				forgetSpell(std::string const &spellName);
		void				launchSpell(std::string spellName, ATarget const &target);


};

#endif