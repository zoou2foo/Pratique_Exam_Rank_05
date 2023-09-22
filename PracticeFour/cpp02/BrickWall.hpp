#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget {
	private:

	public:
		BrickWall(void);
		~BrickWall(void);
		virtual BrickWall* clone(void) const;
};

#endif