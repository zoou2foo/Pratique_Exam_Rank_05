#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <string>
#include <map>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator {
	private:
		TargetGenerator(TargetGenerator const &copy);
		TargetGenerator& operator=(TargetGenerator const &rhs);
		std::map<std::string, ATarget*> _bookTarget;

	public:
		TargetGenerator(void);
		~TargetGenerator(void);

		void	learnTargetType(ATarget *target);
		void	forgetTargetType(std::string const &type);
		ATarget*	createTarget(std::string const &target);

};

#endif