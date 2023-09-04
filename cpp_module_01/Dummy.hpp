#ifndef DUMMY_HPP
#define DUMMY_HPP

#include "ATarget.hpp"

class Dummy: public ATarget
{
    private:
        std::string _type;
        Dummy(const Dummy& copy);
        Dummy& operator=(const Dummy& rhs);

    public:
        Dummy(void);
        ~Dummy(void);
        Dummy* clone(void);
};


#endif