/****************************************************
 *
*****************************************************/
#include "test.h"
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace CompA
{
	int GetMinOrMax(int *arr, int count, bool isMax)
	{
		int temp = arr[0];

		for(int i = 1;i<count; i++)
		{
			if(isMax)
			{
				if(temp < arr[i])
				{
					temp = arr[i];
				}
			}
			else
			{
				if(temp > arr[i])
				{
					temp = arr[i];
				}
			}
		}
		return temp;
	}
}

/************************************************************************
 *
 *ָ���������ã� ���� *&ָ��������= ָ�룻
 *�ܽ᣺��C������ȣ����������ñ����Ͼ���ָ���Ӧ��
************************************************************************/
void fun(int &a, int &b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}
void Test(void)
{
	int a = 10;
	int *p = &a;//ָ��pָ�����a
	int *&q = p;//ָ��p�ı���q
	*q = 20;//a , *p �� *q�����20

	int &b = a;
	b = 20;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;

	int a1 = 10;
	int b1 = 20;
	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;
	fun(a1, b1);
	cout << "a1 = " << a1 << endl;
	cout << "b1 = " << b1 << endl;
}
/************************************************************************
 *const
 *�ܽ᣺��C������ȣ���һ���ġ�const����˭ǰ�棬˭���ǳ��������ɱ䡣
************************************************************************/

/************************************************************************
 *����Ĭ��ֵ
 *�ܽ᣺��Ĭ�ϲ���ֵ�Ĳ��������ڴӲ���������Ҷ˿�ʼ��
************************************************************************/
void PrintFun(int a = 10,int b = 20, int c = 30);
void PrintFun(int a,int b, int c)
{
	cout << "a = " << a << ",b = " << b << ",c = " << c << endl;
}
/************************************************************************
 *��������
 *�ܽ᣺�������أ�Ҫ��������ͬ���Ҳ����ɱ档��������ͨ��������������ͺ͸������ֵ����ĸ������ġ�
************************************************************************/
void PrintFun(double i, double j)
{
	cout << "i = " << i << ",j = " << j << endl;
}
void TestFun(void)
{
	cout << "����Ĭ��ֵ����" << endl;
	PrintFun();
	PrintFun(1);
	PrintFun(1,2);
	PrintFun(1,2,3);
	PrintFun(1.1, 2.2);
}

/************************************************************************
 *�����ࣺ����һ���������
 *�ܽ᣺
************************************************************************/
class Coordinate
{
public:
	int x;
	int y;
	void PrintX()
	{
		cout << x << endl;
	}
	void PrintY()
	{
		cout << y << endl;
	}
};

void TestClass(void)
{
	Coordinate corr;
	corr.x = 10;
	corr.y = 20;
	corr.PrintX();
	corr.PrintY();

	Coordinate *p = new Coordinate();
	if(NULL == p)
	{
		//exit(-1);
		return;
	}
	p->x = 100;
	p->y = 200;
	p->PrintX();
	p->PrintY();
	delete p;
}