#include <cstdlib>

#ifndef CHICKEN_H
#define CHICKEN_H

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
		exit(1);
	return *creator;
}

Egg Chicken::getCreator()
{
	if (!creator)
        	exit(1);
	return *creator;
}

#endif
