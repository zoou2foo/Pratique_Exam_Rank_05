#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class Dummy : public ATarget {
	private:

	public:
		Dummy(void);
		~Dummy(void);
		virtual Dummy* clone(void) const;
};

#endif