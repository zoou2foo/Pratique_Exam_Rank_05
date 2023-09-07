#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall: public ATarget
{
	private:
		BrickWall(const BrickWall& copy);
		BrickWall& operator=(const BrickWall& rhs);

	public:
		BrickWall(void);
		~BrickWall(void);
		BrickWall* clone(void);
};

#endif