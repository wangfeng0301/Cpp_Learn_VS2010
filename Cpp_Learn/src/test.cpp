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
 *指针类型引用： 类型 *&指针引用名= 指针；
 *总结：和C语言相比，别名和引用本质上就是指针的应用
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
	int *p = &a;//指针p指向变量a
	int *&q = p;//指针p的别名q
	*q = 20;//a , *p 和 *q都变成20

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
 *总结：和C语言相比，是一样的。const放在谁前面，谁就是常量，不可变。
************************************************************************/

/************************************************************************
 *函数默认值
 *总结：有默认参数值的参数必须在从参数表的最右端开始。
************************************************************************/
void PrintFun(int a = 10,int b = 20, int c = 30);
void PrintFun(int a,int b, int c)
{
	cout << "a = " << a << ",b = " << b << ",c = " << c << endl;
}
/************************************************************************
 *函数重载
 *总结：函数重载，要求函数名相同，且参数可辨。编译器是通过传入参数的类型和个数区分调用哪个函数的。
************************************************************************/
void PrintFun(double i, double j)
{
	cout << "i = " << i << ",j = " << j << endl;
}
void TestFun(void)
{
	cout << "函数默认值测试" << endl;
	PrintFun();
	PrintFun(1);
	PrintFun(1,2);
	PrintFun(1,2,3);
	PrintFun(1.1, 2.2);
}

/************************************************************************
 *定义类：定义一个坐标的类
 *总结：
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