#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <map>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator
{
	private:
		TargetGenerator(const TargetGenerator &copy);
		TargetGenerator& operator=(const TargetGenerator &rhs);
		std::map<std::string, ATarget*> targetBook;

	public:
		TargetGenerator(void);
		~TargetGenerator(void);
		void learnTargetType(ATarget* type);
		void forgetTargetType(std::string const &type);
		ATarget* createTarget(std::string const &target);
};

#endif