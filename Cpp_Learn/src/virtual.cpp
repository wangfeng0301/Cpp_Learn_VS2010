#include "virtual.h"
#include <iostream>
using namespace std;

Shape::Shape()
{
	cout << "Shape()" << endl;
}
Shape::~Shape()
{
	cout << "~Shape()" << endl;
}
double Shape::calcArea()//����Ϊ�麯������ʵ�ֶ�̬
{
	cout << "Shape->calcArea" << endl;
	return 0;
}

Circle::Circle(double r)
{
	cout << "Circle()" << endl;
	m_dR = r;
}
Circle::~Circle()
{
	cout << "~Circle()" << endl;
}
double Circle::calcArea()//����Ϊ�麯�����˴�virtual�ؼ��ֲ��Ǳ���ģ���������ϣ������Ķ�
{
	cout << "Circle->clacArea" << endl;
	return 3.14*m_dR*m_dR;
}


Rect::Rect(double width, double height)
{
	cout << "Rect()" << endl;
	m_dWidth = width;
	m_dHeight = height;
}
Rect::~Rect()
{
	cout << "~Rect()" << endl;
}
double Rect::calcArea()//����Ϊ�麯�����˴�virtual�ؼ��ֲ��Ǳ���ģ���������ϣ������Ķ�
{
	cout << "Rect->clacArea" << endl;
	return m_dWidth*m_dHeight;
}



void TestVirtual(void)
{
	Shape *shape1 = new Circle(4.0);//ʵ��������shape,������Circle��ֵ
	Shape *shape2 = new Rect(3.0, 5.0);//ʵ��������shape,������Rect��ֵ
	shape1->calcArea();
	shape2->calcArea();
	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;

	Shape shape;
	cout << "sizeof(shape) = " << sizeof(shape) << endl;
}