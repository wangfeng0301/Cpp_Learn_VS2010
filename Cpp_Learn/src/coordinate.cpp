#include <iostream>
#include "Coordinate.h"
using namespace std;

Coordinate::Coordinate()//构造函数
{
	cout << "Coordinate()" << endl;
}
Coordinate::Coordinate(int x,int y)//构造函数
{
	m_iX = x;
	m_iY = y;
	cout << "Coordinate()"<<m_iX <<"," <<m_iY << endl;
}

Coordinate::~Coordinate()//析构函数
{
	cout << "~Coordinate()" << m_iX <<"," <<m_iY <<endl;
}

//横坐标数据封装函数
void Coordinate::setX(int x)
{
	m_iX = x;
}

int Coordinate::getX()
{
	return m_iX;
}

//纵坐标数据封装函数
void Coordinate::setY(int y)
{
	m_iY = y;
}
int Coordinate::getY()
{
	return m_iY;
}
//-(负号)重载实现
Coordinate &Coordinate::operator-()
{
	m_iX = -m_iX;//this->m_iX = -this->m_iX;
	m_iY = -m_iY;//this->m_iY = -this->m_iY;
	return *this;//注意这里隐藏了this指针
}
//负号重载实现，注意友元函数实现与成员函数的不同
//友元函数和成员函数只能选一种实现
/*Coordinate &operator-(Coordinate &coor)
{
	coor.m_iX = -coor.m_iX;
	coor.m_iY = -coor.m_iY;
	return coor;
}*/

//前置++符号重载实现
Coordinate &Coordinate::operator++()
{
	m_iX ++;
	m_iY ++;//调用完此函数之后，外面接收到的值就是++之后的值
	return *this;//注意这里隐藏了this指针
}
//后置++符号重载实现
Coordinate Coordinate::operator++(int)
{
	Coordinate old(*this);//old初始化为*this，相当于保留之前的值,这里使用默认的拷贝构造函数
	this->m_iX ++;
	this->m_iY ++;//调用完此函数之后，外面接收到的值是之前的值
	return old;
}
Coordinate Coordinate::operator+(const Coordinate &coor)
{
	Coordinate temp(0,0);
	temp.m_iX = this->m_iX + coor.m_iX;
	temp.m_iY = this->m_iY + coor.m_iY;
	return temp;
}
/*Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2)//符号重载实现，注意友元函数实现与成员函数的不同
{
	Coordinate temp;
	temp.m_iX = coor1.m_iX + coor2.m_iX;
	temp.m_iY = coor1.m_iY + coor2.m_iY;
	return temp;
}*/
ostream &operator<<(ostream &out, const Coordinate &coor)
{
	out << coor.m_iX << "," << coor.m_iY;
	return out;
}
int Coordinate::operator[](int index)
{
	if(0 == index)
		return m_iX;
	else if(1 == index)
		return m_iY;
	else//实际应该判断出错
		return 0;
}







Coordinate1::Coordinate1(int x,int y):m_iX(x),m_iY(y)//构造函数，必须用初始化列表初始化
{
	cout << "Coordinate()"<<m_iX <<"," <<m_iY << endl;
}

Coordinate1::~Coordinate1(void)//析构函数
{
	cout << "~Coordinate()" << m_iX <<"," <<m_iY <<endl;
}

//横坐标数据封装函数
void Coordinate1::changeX()
{
	
}

int Coordinate1::getX() const//常函数
{
	return m_iX;
}

//纵坐标数据封装函数
void Coordinate1::setY(int y)
{
	//m_iY = y;
}
int Coordinate1::getY() const
{
	return m_iY;
}
void Coordinate1::printfInfo(void) const
{
	cout << m_iX << "," << m_iY << endl;
}


/*
 *要求：分别从堆和栈中实例化长度为3的对象数组
 *给数组中的元素分别赋值
 *遍历两个数组
 */
void TestObjectArray(void)
{
	Coordinate coor[3];//实例化对象数组
	coor[0].setX(1);
	coor[0].setY(2);

	Coordinate *p = new Coordinate[3];//从堆中实例化对象数组
	p->setX(7);
	p->setY(9);
	p ++;
	
	p[0].setX(10);
	p[0].setY(11);
	p[1].setX(20);
	p[1].setY(21);
	p ++;

	for(int i = 0;i<3;i++)
	{
		cout << "coor_x：" << coor[i].getX() << endl;
		cout << "coor_y：" << coor[i].getY() << endl;
	}
	for(int i = 0;i<3;i++)
	{
		cout << "p_x：" << p->getX() << endl;
		cout << "p_y：" << p->getY() << endl;
		p --;
	}

	p++;
	delete []p;//销毁
	p = NULL;

}

/*
 *要求：测试符号重载
 *
 *
 */
void TestReload(void)
{
	Coordinate coor1(3,5);
	cout << coor1.getX() << "," << coor1.getY() <<endl;
	-coor1;//等价于coor1.operator-();如果是友元函数则等价于operator-(coor1);
	cout << coor1.getX() << "," << coor1.getY() <<endl;//应该输出-3，-5
	++coor1;//等价于coor1.operator-();如果是友元函数则等价于operator-(coor1);
	cout << coor1.getX() << "," << coor1.getY() <<endl;
	coor1++;//等价于coor1.operator++(0);//系统默认传入值0，只是为表达后置++
	cout << coor1.getX() << "," << coor1.getY() <<endl;
	cout << (coor1++).getX() << "," ;
	cout << coor1.getX() << "," << coor1.getY() <<endl;


	Coordinate coor2(10,10);
	Coordinate coor3(0,0);
	coor3 = coor1 + coor2;
	cout << coor3.getX() << "," << coor3.getY() << endl;
	cout << coor3 << endl;;//operator<<(cout,coor);//注意这里cout是一个ostream类型的对象
	cout << coor3[0] << "," << coor3[1] << endl;
}