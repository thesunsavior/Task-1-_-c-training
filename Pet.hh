#pragma once

class Pet
{
public:
	virtual const char *say() = 0;
	virtual bool gnaw() = 0;
	virtual int lifes() { return 1; }

protected:
	friend void pets();
};
