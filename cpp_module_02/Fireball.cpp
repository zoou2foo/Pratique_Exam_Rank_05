#include "Fireball.hpp"

Fireball::Fireball(void) : ASpell("Fireball", "burnt to a crisp")
{
	return;
}

Fireball::~Fireball(void)
{
	return;
}

Fireball* Fireball::clone(void)
{
	return (new Fireball());
}