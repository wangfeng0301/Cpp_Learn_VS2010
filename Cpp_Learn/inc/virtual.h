#ifndef _VIRTUAL_H_
#define _VIRTUAL_H_

class Shape
{
public:
	Shape();//���캯��
	virtual ~Shape();//������������ʹ�ö�̬ʱ�����붨���鹹����Ϊ�������������������ͷŸ�ָ��ʱ�������ȵ��������������������ͷŸ�����������
	//double calcArea();
	virtual double calcArea();//����Ϊ�麯������ʵ�ֶ�̬
};
class Circle:public Shape//Բ�ι��м̳�Shape��
{
public:
	Circle(double r);//���캯��
	virtual ~Circle();//����������������Բ���дvirtual�ؼ��֣���дҲ������������
	//double calcArea();
	virtual double calcArea();//����Ϊ�麯�����˴�virtual�ؼ��ֲ��Ǳ���ģ���������ϣ������Ķ�
								//һ��Ҫ����������ȫһ�������������ͷ���ֵ
private:
	double m_dR;
};
class Rect:public Shape//�����๫�м̳�Sheap��
{
public:
	Rect(double width, double height);//���캯��
	virtual ~Rect();//������������������Բ���дvirtual�ؼ��֣���дҲ������������
	//double calcArea();
	virtual double calcArea();//����Ϊ�麯�����˴�virtual�ؼ��ֲ��Ǳ���ģ���������ϣ������Ķ�
private:
	double m_dWidth;
	double m_dHeight;
};



void TestVirtual(void);
#endif