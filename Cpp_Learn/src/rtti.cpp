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


/*ȫ�ֺ���*/
void doSomething(Flyable_RTTI *obj)
{
	obj->takeoff();
	cout << typeid(*obj).name() << endl;//ע������typeid���÷��������Է���������
	if(typeid(*obj) == typeid(Bird_RTTI))//�Ƚ����ĸ���
	{
		Bird_RTTI *bird = dynamic_cast<Bird_RTTI *>(obj);//ע������dynamic_cast���÷������Զ�̬ת���ɶ�Ӧ������
		bird->foraging();//ת����Birdָ��󣬿��Ե���Bird�еĺ���
	}
	if(typeid(*obj) == typeid(Plane_RTTI))//�Ƚ����ĸ���
	{
		Plane_RTTI *plane = dynamic_cast<Plane_RTTI *>(obj);//ע������dynamic_cast���÷������Զ�̬ת���ɶ�Ӧ������
		plane->carry();//ת����Birdָ��󣬿��Ե���Bird�еĺ���
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