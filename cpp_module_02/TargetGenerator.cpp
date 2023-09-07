#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
	return;
}

TargetGenerator::~TargetGenerator(void)
{
	return;
}

void TargetGenerator::learnTargetType(ATarget* type)
{
	if (type)
		this->targetBook[type->getType()] = type->clone();
}

void TargetGenerator::forgetTargetType(std::string const &type)
{
	this->targetBook.erase(type);
}

ATarget* TargetGenerator::createTarget(std::string const &type)
{
	std::map <std::string, ATarget *>::iterator it = this->targetBook.find(type);
	if (it != this->targetBook.end())
		return (it->second);
	else
		return (NULL);
}