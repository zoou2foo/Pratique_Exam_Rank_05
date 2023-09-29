#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell {
	private:

	public:
		Polymorph(void);
		~Polymorph(void);
		virtual Polymorph* clone(void) const;
};

#endif