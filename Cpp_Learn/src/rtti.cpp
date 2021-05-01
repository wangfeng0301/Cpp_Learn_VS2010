#include "rtti.h"
#include <iostream>
#include <typeinfo>
using namespace std;

void Plane_RTTI::takeoff()
{
	cout << "Plane->takeoff" << endl;
}
void Plane_RTTI::land()
{
	cout << "Plane->land" << endl;
}
void Plane_RTTI::carry()
{
	cout << "Plane->carry" << endl;
}


void Bird_RTTI::takeoff()
{
	cout << "Bird->takeoff" << endl;
}
void Bird_RTTI::land()
{
	cout << "Bird->land" << endl;
}
void Bird_RTTI::foraging()
{
	cout << "Bird->foraging" << endl;
}


/*全局函数*/
void doSomething(Flyable_RTTI *obj)
{
	obj->takeoff();
	cout << typeid(*obj).name() << endl;//注意这里typeid的用法，它可以返回类名称
	if(typeid(*obj) == typeid(Bird_RTTI))//比较是哪个类
	{
		Bird_RTTI *bird = dynamic_cast<Bird_RTTI *>(obj);//注意这里dynamic_cast的用法，可以动态转换成对应的类型
		bird->foraging();//转换成Bird指针后，可以调用Bird中的函数
	}
	if(typeid(*obj) == typeid(Plane_RTTI))//比较是哪个类
	{
		Plane_RTTI *plane = dynamic_cast<Plane_RTTI *>(obj);//注意这里dynamic_cast的用法，可以动态转换成对应的类型
		plane->carry();//转换成Bird指针后，可以调用Bird中的函数
	}
	obj->land();
}
void TestRTTI(void)
{
	Bird_RTTI bird;
	doSomething(&bird);

	Plane_RTTI plane;
	doSomething(&plane);

	int i = 0;
	cout << typeid(i).name() << endl;
	double j = 0;
	cout << typeid(j).name() << endl;

	Flyable_RTTI *p = new Bird_RTTI;
	cout << typeid(p).name() << endl;
	cout << typeid(*p).name() << endl;
}