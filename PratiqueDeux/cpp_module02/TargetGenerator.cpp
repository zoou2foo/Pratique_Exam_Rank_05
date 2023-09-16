#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void) { return; }
TargetGenerator::~TargetGenerator(void) { return; }

void    TargetGenerator::learnTargetType(ATarget* target){
	if (target) //to make sure that the pointer is not NULL
		this->_targetBook[target->getType()] = target->clone();//in my container map
		//key becomes type of target and then, the clone becomes the value of the key "type"
		//clone is a copy of ATarget*
}

void    TargetGenerator::forgetTargetType(std::string const & type) {
	std::map<std::string, ATarget*>::iterator it = this->_targetBook.find(type); //iterator to find type in
	//the container. This is to make sure that the reference type is NOT at zero
	if (it != this->_targetBook.end()) //if iterator not at the end; it found type
		delete it->second; //delete the value, ATarget*
	this->_targetBook.erase(type); //then erase/delete the key, type
}

ATarget* TargetGenerator::createTarget(std::string const & target){
	std::map<std::string, ATarget*>::iterator it = this->_targetBook.find(target); //iterator to find the target
	//in the container. As it's Warlock that will call it throught it's SpellBook object in private attr.
	if (it != this->_targetBook.end()) //if iterator not at the end, target exists
		return (it->second); //return it, the ATarget*
	else
		return (NULL); //otherwise, returns NULL
}