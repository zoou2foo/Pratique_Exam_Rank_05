#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) { return; }
TargetGenerator::~TargetGenerator(void) { return; }

void    TargetGenerator::learnTargetType(ATarget* target){
    if (target)
        this->_targetBook[target->getType()] = target->clone();
}

void    TargetGenerator::forgetTargetType(std::string const & type) {
    std::map<std::string, ATarget*>::iterator it = this->_targetBook.find(type);
    if (it != this->_targetBook.end())
        delete it->second;
    this->_targetBook.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const & target){
    std::map<std::string, ATarget*>::iterator it = this->_targetBook.find(target);
    if (it != this->_targetBook.end())
        return (it->second);
    else
        return (NULL);
}