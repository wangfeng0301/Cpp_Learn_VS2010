#include <iostream>
#include "Coordinate.h"
using namespace std;

Coordinate::Coordinate()//���캯��
{
	cout << "Coordinate()" << endl;
}
Coordinate::Coordinate(int x,int y)//���캯��
{
	m_iX = x;
	m_iY = y;
	cout << "Coordinate()"<<m_iX <<"," <<m_iY << endl;
}

Coordinate::~Coordinate()//��������
{
	cout << "~Coordinate()" << m_iX <<"," <<m_iY <<endl;
}

//���������ݷ�װ����
void Coordinate::setX(int x)
{
	m_iX = x;
}

int Coordinate::getX()
{
	return m_iX;
}

//���������ݷ�װ����
void Coordinate::setY(int y)
{
	m_iY = y;
}
int Coordinate::getY()
{
	return m_iY;
}
//-(����)����ʵ��
Coordinate &Coordinate::operator-()
{
	m_iX = -m_iX;//this->m_iX = -this->m_iX;
	m_iY = -m_iY;//this->m_iY = -this->m_iY;
	return *this;//ע������������thisָ��
}
//��������ʵ�֣�ע����Ԫ����ʵ�����Ա�����Ĳ�ͬ
//��Ԫ�����ͳ�Ա����ֻ��ѡһ��ʵ��
/*Coordinate &operator-(Coordinate &coor)
{
	coor.m_iX = -coor.m_iX;
	coor.m_iY = -coor.m_iY;
	return coor;
}*/

//ǰ��++��������ʵ��
Coordinate &Coordinate::operator++()
{
	m_iX ++;
	m_iY ++;//������˺���֮��������յ���ֵ����++֮���ֵ
	return *this;//ע������������thisָ��
}
//����++��������ʵ��
Coordinate Coordinate::operator++(int)
{
	Coordinate old(*this);//old��ʼ��Ϊ*this���൱�ڱ���֮ǰ��ֵ,����ʹ��Ĭ�ϵĿ������캯��
	this->m_iX ++;
	this->m_iY ++;//������˺���֮��������յ���ֵ��֮ǰ��ֵ
	return old;
}
Coordinate Coordinate::operator+(const Coordinate &coor)
{
	Coordinate temp(0,0);
	temp.m_iX = this->m_iX + coor.m_iX;
	temp.m_iY = this->m_iY + coor.m_iY;
	return temp;
}
/*Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2)//��������ʵ�֣�ע����Ԫ����ʵ�����Ա�����Ĳ�ͬ
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
	else//ʵ��Ӧ���жϳ���
		return 0;
}







Coordinate1::Coordinate1(int x,int y):m_iX(x),m_iY(y)//���캯���������ó�ʼ���б��ʼ��
{
	cout << "Coordinate()"<<m_iX <<"," <<m_iY << endl;
}

Coordinate1::~Coordinate1(void)//��������
{
	cout << "~Coordinate()" << m_iX <<"," <<m_iY <<endl;
}

//���������ݷ�װ����
void Coordinate1::changeX()
{
	
}

int Coordinate1::getX() const//������
{
	return m_iX;
}

//���������ݷ�װ����
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
 *Ҫ�󣺷ֱ�ӶѺ�ջ��ʵ��������Ϊ3�Ķ�������
 *�������е�Ԫ�طֱ�ֵ
 *������������
 */
void TestObjectArray(void)
{
	Coordinate coor[3];//ʵ������������
	coor[0].setX(1);
	coor[0].setY(2);

	Coordinate *p = new Coordinate[3];//�Ӷ���ʵ������������
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
		cout << "coor_x��" << coor[i].getX() << endl;
		cout << "coor_y��" << coor[i].getY() << endl;
	}
	for(int i = 0;i<3;i++)
	{
		cout << "p_x��" << p->getX() << endl;
		cout << "p_y��" << p->getY() << endl;
		p --;
	}

	p++;
	delete []p;//����
	p = NULL;

}

/*
 *Ҫ�󣺲��Է�������
 *
 *
 */
void TestReload(void)
{
	Coordinate coor1(3,5);
	cout << coor1.getX() << "," << coor1.getY() <<endl;
	-coor1;//�ȼ���coor1.operator-();�������Ԫ������ȼ���operator-(coor1);
	cout << coor1.getX() << "," << coor1.getY() <<endl;//Ӧ�����-3��-5
	++coor1;//�ȼ���coor1.operator-();�������Ԫ������ȼ���operator-(coor1);
	cout << coor1.getX() << "," << coor1.getY() <<endl;
	coor1++;//�ȼ���coor1.operator++(0);//ϵͳĬ�ϴ���ֵ0��ֻ��Ϊ������++
	cout << coor1.getX() << "," << coor1.getY() <<endl;
	cout << (coor1++).getX() << "," ;
	cout << coor1.getX() << "," << coor1.getY() <<endl;


	Coordinate coor2(10,10);
	Coordinate coor3(0,0);
	coor3 = coor1 + coor2;
	cout << coor3.getX() << "," << coor3.getY() << endl;
	cout << coor3 << endl;;//operator<<(cout,coor);//ע������cout��һ��ostream���͵Ķ���
	cout << coor3[0] << "," << coor3[1] << endl;
}