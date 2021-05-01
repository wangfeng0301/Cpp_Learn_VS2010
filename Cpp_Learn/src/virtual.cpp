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
double Shape::calcArea()//定义为虚函数，以实现多态
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
double Circle::calcArea()//定义为虚函数，此处virtual关键字不是必须的，但建议加上，方便阅读
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
double Rect::calcArea()//定义为虚函数，此处virtual关键字不是必须的，但建议加上，方便阅读
{
	cout << "Rect->clacArea" << endl;
	return m_dWidth*m_dHeight;
}



void TestVirtual(void)
{
	Shape *shape1 = new Circle(4.0);//实例化父类shape,用子类Circle赋值
	Shape *shape2 = new Rect(3.0, 5.0);//实例化父类shape,用子类Rect赋值
	shape1->calcArea();
	shape2->calcArea();
	delete shape1;
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;

	Shape shape;
	cout << "sizeof(shape) = " << sizeof(shape) << endl;
}