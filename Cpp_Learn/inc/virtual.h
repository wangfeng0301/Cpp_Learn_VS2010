#ifndef _VIRTUAL_H_
#define _VIRTUAL_H_

class Shape
{
public:
	Shape();//构造函数
	virtual ~Shape();//虚析构函数，使用多态时，必须定义虚构函数为虚析构函数，这样在释放父指针时，才能先调用子类析构函数，再释放父析构函数。
	//double calcArea();
	virtual double calcArea();//定义为虚函数，以实现多态
};
class Circle:public Shape//圆形公有继承Shape类
{
public:
	Circle(double r);//构造函数
	virtual ~Circle();//析构函数，子类可以不必写virtual关键字，不写也是虚析构函数
	//double calcArea();
	virtual double calcArea();//定义为虚函数，此处virtual关键字不是必须的，但建议加上，方便阅读
								//一定要跟父类中完全一样，包括参数和返回值
private:
	double m_dR;
};
class Rect:public Shape//矩形类公有继承Sheap类
{
public:
	Rect(double width, double height);//构造函数
	virtual ~Rect();//虚析构函数，子类可以不必写virtual关键字，不写也是虚析构函数
	//double calcArea();
	virtual double calcArea();//定义为虚函数，此处virtual关键字不是必须的，但建议加上，方便阅读
private:
	double m_dWidth;
	double m_dHeight;
};



void TestVirtual(void);
#endif