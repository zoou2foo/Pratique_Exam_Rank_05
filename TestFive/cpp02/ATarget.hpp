#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
	protected:
		std::string	_type;

	public:
		ATarget(void);
		ATarget(std::string const &type);
		ATarget(ATarget const &copy);
		virtual ~ATarget(void);

		ATarget&			operator=(ATarget const &rhs);
		std::string const &	getType(void) const;
		virtual ATarget*	clone(void) const = 0;
		void				getHitBySpell(ASpell const &spell) const;

};

#endif