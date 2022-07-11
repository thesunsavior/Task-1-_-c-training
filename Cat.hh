#ifndef CAT_H
#define CAT_H

//#include "Pet.hh"

class Cat : public Pet
{
public:
	virtual const char *say() override { return "miaow"; }
	virtual bool gnaw() override { return false; }

protected:
	virtual int lifes() override { return 9; }
};

#endif // CAT_H