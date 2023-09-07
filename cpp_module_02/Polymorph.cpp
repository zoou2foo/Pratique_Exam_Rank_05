#include "Polymorph.hpp"

Polymorph::Polymorph(void) : ASpell("Polymorph", "turned into a critter")
{
	return;
}

Polymorph::~Polymorph(void)
{
	return;
}

Polymorph* Polymorph::clone(void)
{
	return (new Polymorph());
}