#ifndef FWOOSH_HPP
# define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh : public ASpell {
	private:

	public:
		Fwoosh(void);
		~Fwoosh(void);
		Fwoosh* clone(void) const;
};

#endif