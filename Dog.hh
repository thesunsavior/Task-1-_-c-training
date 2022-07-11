#ifndef DOG_H
#define DOG_H

class Dog : public Pet
{
public:
	virtual const char *say() override { return "bow-wow"; }
	virtual bool gnaw() override { return true; }

protected:
};

#endif // DOG_H