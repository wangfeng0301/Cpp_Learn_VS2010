#include "interface.h"
#include <iostream>
#include <string>
using namespace std;

/*
 *接口类测试
 *1.Flybale类，
 *2.Plane类
 *3.FighterPlane类
 *4.全局函数flyMatch(Flyable *f1,Flyable *f2)
 */

Plane::Plane(string code)
{
	cout << "Plane" << endl;
	m_strCode = code;
}
void Plane::takeoff()
{
	cout << "Plane->takeoff" << endl;
}
void Plane::land()
{
	cout << "Plane->land" << endl;
}
void Plane::printCode()
{
	cout << "Plane->m_strCode:" << m_strCode << endl;
}


FighterPlane::FighterPlane(string code):Plane(code)
{
	cout << "FighterPlane" << endl;
}
void FighterPlane::takeoff()
{
	cout << "FighterPlane->takeoff" << endl;
}
void FighterPlane::land()
{
	cout << "FighterPlane->land" << endl;
}
/*利用接口类带来的灵活性*/
void flyMatch(Flyable *f1,Flyable *f2)
{
	f1->takeoff();
	f1->land();
	f2->takeoff();
	f2->land();
}
void TestInterface(void)
{
	Plane p1("001");//实例化
	Plane p2("002");//实例化
	p1.printCode();//
	p2.printCode();

	flyMatch(&p1,&p2);

	FighterPlane p3("003");//实例化
	FighterPlane p4("004");//实例化
	p3.printCode();//
	p4.printCode();

	flyMatch(&p3,&p4);//传入的实参是FighterPlane类，则flyMatch中调用的是FighterPlane类的函数
}