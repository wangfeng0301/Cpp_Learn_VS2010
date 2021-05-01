#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()//构造函数
{
	cout <<"Line()"<< endl;
}
Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)//构造函数
{
	cout <<"Line()"<< x1 << "," << y1 << "," << x2 <<"," << y2 <<endl;
}
Line::~Line()//析构函数
{
	delete m_pCoorC;
	m_pCoorC = NULL;
	cout<<"~Line()"<<endl;
}

//A数据封装函数
void Line::setA(int x,int y)
{
	m_coorA.setX(x);
	m_coorA.setY(y);
}
//B数据封装函数
void Line::setB(int x,int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
}

void Line::printInfo()
{
	cout << "(" << m_coorA.getX() <<","<< m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() <<","<< m_coorB.getY() << ")" << endl;
}


Line1::Line1(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)//构造函数
{
	cout <<"Line()"<< x1 << "," << y1 << "," << x2 <<"," << y2 <<endl;
}
Line1::~Line1()//析构函数
{
	cout<<"~Line()"<<endl;
}

//A数据封装函数
void Line1::setA(int x,int y)
{
	//m_coorA.setX(x);
	//m_coorA.setY(y);
}
//B数据封装函数
void Line1::setB(int x,int y)
{
	//m_coorB.setX(x);
	//m_coorB.setY(y);
}

void Line1::printInfo()
{
	cout << "printfInfo" << endl;
	cout << "(" << m_coorA.getX() <<","<< m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() <<","<< m_coorB.getY() << ")" << endl;
}
void Line1::printInfo() const//与上面的函数互为重载
{
	cout << "printfInfo const" << endl;
	cout << "(" << m_coorA.getX() <<","<< m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() <<","<< m_coorB.getY() << ")" << endl;
}
/*
 *要求：
 */
void TestObjectMember(void)
{
	//Line *p = new Line(1,2,3,4);
	Line *p = new Line(1,2,3,4);
	p->printInfo();
	delete p;
	p = NULL;
}

void TestConst(void)
{
	Line1 line(1,2,3,4);
	line.printInfo();

	const Line1 line2(5,6,7,8);//定义常对象，则后面调用常函数
	line2.printInfo();

	/*对象的常指针和常引用*/
	Coordinate1 coor1(3,5);
	const Coordinate1 &coor2 = coor1;//coor2是常引用
	const Coordinate1 *coor3 = &coor1;//coor3是常指针
	coor1.printfInfo();//合法
	coor2.getX();//合法，因为getX已经定义为const了，只需要读权限
	coor3->getY();//合法，因为getY已经定义为const了，只需要读权限

	Coordinate1 coor4(5,6);
	Coordinate1 *const pCoor = &coor1;//注意这里的const在“*”后面
	pCoor->getY();//合法，*pCoor有读写权限，getY有读权限，故合法
	//pCoor = coor4;//非法，pCoor只有读权限，不能改变指向

}