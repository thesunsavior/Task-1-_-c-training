#include <cstdlib>
#ifndef EGG_H
#define EGG_H

class Chicken;

class Egg
{
public:
	Chicken *creator;
	Chicken getCreator();
};
#endif