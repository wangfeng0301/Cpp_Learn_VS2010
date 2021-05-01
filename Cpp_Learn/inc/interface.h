#ifndef _INTERFACE_H_
#define _INTERFACE_H_
#include <string>
using namespace std;

/*接口类,没有函数实现*/
class Flyable
{
public:
	virtual void takeoff() = 0;//虚函数，降落
	virtual void land() = 0;//虚函数，起飞
};

class Plane:public Flyable
{
public:
	Plane(string code);
	virtual void takeoff();
	virtual void land();
	void printCode();
private:
	string m_strCode;
};

class FighterPlane:public Plane
{
public:
	FighterPlane(string code);//构造函数
	virtual void takeoff();//如果不实现，则继承plane中的takeoff函数
	virtual void land();
};


void TestInterface(void);
#endif