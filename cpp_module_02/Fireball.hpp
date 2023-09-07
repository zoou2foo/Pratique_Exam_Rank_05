#ifndef FIREBALL_HPP
# define FIREBALL_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
	private:
		Fireball(const Fireball& copy);
		Fireball& operator=(const Fireball &rhs);

	public:
		Fireball(void);
		~Fireball(void);
		Fireball* clone(void);
};

#endif