#include <cstdlib>

class Egg;

// #include "Egg.hh"

class Chicken
{
public:
	Egg *creator;
	Egg getCreator(); // declaration only
};

// definitions:
Chicken Egg::getCreator()
{
	if (!creator)
		return Chicken{};
	return *creator;
}

Egg Chicken::getCreator()
{
	if (!creator)
		return Egg{};
	return *creator;
}