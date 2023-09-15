#ifndef DUMMY_HPP
# define DUMMY_HPP

#include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget {
    private:

    public:
        Dummy(void);
        ~Dummy(void);
        virtual ATarget* clone(void) const;
};

#endif