#ifndef _RTTI_H_
#define _RTTI_H_

class Flyable_RTTI
{
public:
	virtual void takeoff() = 0;//Ðéº¯Êý£¬½µÂä
	virtual void land() = 0;//Ðéº¯Êý£¬Æð·É
};
class Bird_RTTI:public Flyable_RTTI
{
public:
	void foraging();
	virtual void takeoff();
	virtual void land();
};
class Plane_RTTI:public Flyable_RTTI
{
public:
	void carry();
	virtual void takeoff();
	virtual void land();
};

void TestRTTI(void);
#endif