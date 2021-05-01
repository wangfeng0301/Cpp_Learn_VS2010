#ifndef _COORDINATE_H_
#define _COORDINATE_H_
#include <iostream>
#include <ostream>
using namespace std;

class Coordinate
{
	//friend Coordinate &operator-(Coordinate &coor);//-(符号)重载声明，注意与成员函数重载的不同，这里需要加参数。//友元函数和成员函数只能选一种实现
	//friend Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2);//+(加号)重载声明，注意传入的参数类型加const表示在函数实现时不希望改变参数值
	friend ostream &operator<<(ostream &out, const Coordinate &coor);//注意返回的类型是ostream 的引用,必须只能用友元函数重载
public:
	Coordinate();//默认构造函数
	Coordinate(int x,int y);//声明构造函数
	~Coordinate();//声明析构函数
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	Coordinate &operator-();//-(符号)重载声明，注意一定要用关键字operator
	Coordinate &operator++();//前置++重载声明，注意一定要用关键字operator
	Coordinate operator++(int);//后置++重载声明，注意与前置++的区别，参数里面有类型，表示后置重载，注意只有类型没有参数
								//注意返回的类型不再是引用，因为返回的是++之前的值
	Coordinate operator+(const Coordinate &coor);//注意成员函数隐藏了第一个操作数this指针
	int operator[](int index);//只能用成员函数重载
private:
	int m_iX;//数据成员
	int m_iY;
};

/*
 *测试常对象成员，常成员函数，常对象
 */
class Coordinate1
{
public:
	Coordinate1();//默认构造函数
	Coordinate1(int x,int y);//声明构造函数
	~Coordinate1();//声明析构函数
	void changeX() const;//常成员函数，等价于change(const Coordinate *this)
	void changeX();//与上面的常成员函数互为重载
	void setX(int x);
	int getX() const;
	void setY(int y);
	int getY() const;//常成员函数
	void printfInfo(void) const;
private:
	const int m_iX;//常数据成员
	const int m_iY;
};
void TestObjectArray(void);
void TestReload(void);

#endif