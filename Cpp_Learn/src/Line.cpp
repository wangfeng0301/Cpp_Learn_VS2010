#include "Line.h"
#include <iostream>
using namespace std;

Line::Line()//���캯��
{
	cout <<"Line()"<< endl;
}
Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)//���캯��
{
	cout <<"Line()"<< x1 << "," << y1 << "," << x2 <<"," << y2 <<endl;
}
Line::~Line()//��������
{
	delete m_pCoorC;
	m_pCoorC = NULL;
	cout<<"~Line()"<<endl;
}

//A���ݷ�װ����
void Line::setA(int x,int y)
{
	m_coorA.setX(x);
	m_coorA.setY(y);
}
//B���ݷ�װ����
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


Line1::Line1(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)//���캯��
{
	cout <<"Line()"<< x1 << "," << y1 << "," << x2 <<"," << y2 <<endl;
}
Line1::~Line1()//��������
{
	cout<<"~Line()"<<endl;
}

//A���ݷ�װ����
void Line1::setA(int x,int y)
{
	//m_coorA.setX(x);
	//m_coorA.setY(y);
}
//B���ݷ�װ����
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
void Line1::printInfo() const//������ĺ�����Ϊ����
{
	cout << "printfInfo const" << endl;
	cout << "(" << m_coorA.getX() <<","<< m_coorA.getY() << ")" << endl;
	cout << "(" << m_coorB.getX() <<","<< m_coorB.getY() << ")" << endl;
}
/*
 *Ҫ��
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

	const Line1 line2(5,6,7,8);//���峣�����������ó�����
	line2.printInfo();

	/*����ĳ�ָ��ͳ�����*/
	Coordinate1 coor1(3,5);
	const Coordinate1 &coor2 = coor1;//coor2�ǳ�����
	const Coordinate1 *coor3 = &coor1;//coor3�ǳ�ָ��
	coor1.printfInfo();//�Ϸ�
	coor2.getX();//�Ϸ�����ΪgetX�Ѿ�����Ϊconst�ˣ�ֻ��Ҫ��Ȩ��
	coor3->getY();//�Ϸ�����ΪgetY�Ѿ�����Ϊconst�ˣ�ֻ��Ҫ��Ȩ��

	Coordinate1 coor4(5,6);
	Coordinate1 *const pCoor = &coor1;//ע�������const�ڡ�*������
	pCoor->getY();//�Ϸ���*pCoor�ж�дȨ�ޣ�getY�ж�Ȩ�ޣ��ʺϷ�
	//pCoor = coor4;//�Ƿ���pCoorֻ�ж�Ȩ�ޣ����ܸı�ָ��

}