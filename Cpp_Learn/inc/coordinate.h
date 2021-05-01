#ifndef _COORDINATE_H_
#define _COORDINATE_H_
#include <iostream>
#include <ostream>
using namespace std;

class Coordinate
{
	//friend Coordinate &operator-(Coordinate &coor);//-(����)����������ע�����Ա�������صĲ�ͬ��������Ҫ�Ӳ�����//��Ԫ�����ͳ�Ա����ֻ��ѡһ��ʵ��
	//friend Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2);//+(�Ӻ�)����������ע�⴫��Ĳ������ͼ�const��ʾ�ں���ʵ��ʱ��ϣ���ı����ֵ
	friend ostream &operator<<(ostream &out, const Coordinate &coor);//ע�ⷵ�ص�������ostream ������,����ֻ������Ԫ��������
public:
	Coordinate();//Ĭ�Ϲ��캯��
	Coordinate(int x,int y);//�������캯��
	~Coordinate();//������������
	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	Coordinate &operator-();//-(����)����������ע��һ��Ҫ�ùؼ���operator
	Coordinate &operator++();//ǰ��++����������ע��һ��Ҫ�ùؼ���operator
	Coordinate operator++(int);//����++����������ע����ǰ��++�����𣬲������������ͣ���ʾ�������أ�ע��ֻ������û�в���
								//ע�ⷵ�ص����Ͳ��������ã���Ϊ���ص���++֮ǰ��ֵ
	Coordinate operator+(const Coordinate &coor);//ע���Ա���������˵�һ��������thisָ��
	int operator[](int index);//ֻ���ó�Ա��������
private:
	int m_iX;//���ݳ�Ա
	int m_iY;
};

/*
 *���Գ������Ա������Ա������������
 */
class Coordinate1
{
public:
	Coordinate1();//Ĭ�Ϲ��캯��
	Coordinate1(int x,int y);//�������캯��
	~Coordinate1();//������������
	void changeX() const;//����Ա�������ȼ���change(const Coordinate *this)
	void changeX();//������ĳ���Ա������Ϊ����
	void setX(int x);
	int getX() const;
	void setY(int y);
	int getY() const;//����Ա����
	void printfInfo(void) const;
private:
	const int m_iX;//�����ݳ�Ա
	const int m_iY;
};
void TestObjectArray(void);
void TestReload(void);

#endif