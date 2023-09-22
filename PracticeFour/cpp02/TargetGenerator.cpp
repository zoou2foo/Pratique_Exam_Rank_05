#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) { return; }
TargetGenerator::~TargetGenerator(void) { return; }

void	TargetGenerator::learnTargetType(ATarget *target){
	if (target)
		this->_bookTarget[target->getType()] = target->clone();
}
void	TargetGenerator::forgetTargetType(std::string const &type){
	std::map<std::string, ATarget*>::iterator it = this->_bookTarget.find(type);
	if (it != this->_bookTarget.end())
		delete it->second;
	this->_bookTarget.erase(type);
}

ATarget*	TargetGenerator::createTarget(std::string const &target){
	std::map<std::string, ATarget*>::iterator it = this->_bookTarget.find(target);
	if (it != this->_bookTarget.end())
		return (it->second);
	else
		return (NULL);
}