#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

#include "ATarget.hpp"

class ATarget;

class BrickWall : public ATarget {
    private:

    public:
        BrickWall(void);
        ~BrickWall(void);
        virtual ATarget* clone(void) const;
};

#endif