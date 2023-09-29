#include "BrickWall.hpp"

BrickWall::BrickWall(void) : ATarget("Insconspicuous Red-brick Wall") { return; }
BrickWall::~BrickWall(void) { return; }
BrickWall*	BrickWall::clone(void) const { return (new BrickWall()); }