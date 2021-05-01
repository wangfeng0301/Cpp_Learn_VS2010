#ifndef _INTERFACE_H_
#define _INTERFACE_H_
#include <string>
using namespace std;

/*�ӿ���,û�к���ʵ��*/
class Flyable
{
public:
	virtual void takeoff() = 0;//�麯��������
	virtual void land() = 0;//�麯�������
};

class Plane:public Flyable
{
public:
	Plane(string code);
	virtual void takeoff();
	virtual void land();
	void printCode();
private:
	string m_strCode;
};

class FighterPlane:public Plane
{
public:
	FighterPlane(string code);//���캯��
	virtual void takeoff();//�����ʵ�֣���̳�plane�е�takeoff����
	virtual void land();
};


void TestInterface(void);
#endif