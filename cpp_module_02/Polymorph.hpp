#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	private:
		Polymorph(const Polymorph& copy);
		Polymorph& operator=(const Polymorph &rhs);

	public:
		Polymorph(void);
		~Polymorph(void);
		Polymorph* clone(void);
};

#endif