#ifndef _LINE_H_
#define _LINE_H_

#include "Coordinate.h"

class Line
{
public:
	Line();//���캯��
	Line(int x1,int y1,int x2,int y2);//���캯��
	~Line();//��������
	void setA(int x,int y);
	void setB(int x,int y);
	void printInfo();
private:
	Coordinate m_coorA;
	Coordinate m_coorB;
	Coordinate *m_pCoorC;
};
class Line1
{
public:
	Line1();//���캯��
	Line1(int x1,int y1,int x2,int y2);//���캯��
	~Line1();//��������
	void setA(int x,int y);
	void setB(int x,int y);
	void printInfo(void);
	void printInfo(void) const;//����Ա����
private:
	const Coordinate1 m_coorA;
	const Coordinate1 m_coorB;
};
void TestObjectMember(void);
void TestConst(void);


#endif


