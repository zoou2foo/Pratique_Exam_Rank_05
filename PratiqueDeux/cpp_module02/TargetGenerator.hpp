#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator {
    private:
        TargetGenerator(const TargetGenerator& copy);
        TargetGenerator& operator=(const TargetGenerator& rhs);
        std::map<std::string, ATarget*> _targetBook;

    public:
        TargetGenerator(void);
        ~TargetGenerator(void);

        void    learnTargetType(ATarget* target);
        void    forgetTargetType(std::string const &type);
        ATarget* createTarget(std::string const & target);



};

#endif