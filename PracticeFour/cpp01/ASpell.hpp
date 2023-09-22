#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
	protected:
		std::string	_name;
		std::string	_effects;

	public:
		ASpell(void);
		ASpell(std::string const &name, std::string const &effects);
		ASpell(ASpell const &copy);
		virtual ~ASpell(void);

		ASpell&				operator=(ASpell const &rhs);
		std::string const	&getName(void) const;
		std::string const	&getEffects(void) const;
		virtual ASpell*		clone(void) const = 0;
		void				launch(ATarget const &target);

};

#endif