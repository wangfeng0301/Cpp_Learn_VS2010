#include "interface.h"
#include <iostream>
#include <string>
using namespace std;

/*
 *�ӿ������
 *1.Flybale�࣬
 *2.Plane��
 *3.FighterPlane��
 *4.ȫ�ֺ���flyMatch(Flyable *f1,Flyable *f2)
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
/*���ýӿ�������������*/
void flyMatch(Flyable *f1,Flyable *f2)
{
	f1->takeoff();
	f1->land();
	f2->takeoff();
	f2->land();
}
void TestInterface(void)
{
	Plane p1("001");//ʵ����
	Plane p2("002");//ʵ����
	p1.printCode();//
	p2.printCode();

	flyMatch(&p1,&p2);

	FighterPlane p3("003");//ʵ����
	FighterPlane p4("004");//ʵ����
	p3.printCode();//
	p4.printCode();

	flyMatch(&p3,&p4);//�����ʵ����FighterPlane�࣬��flyMatch�е��õ���FighterPlane��ĺ���
}