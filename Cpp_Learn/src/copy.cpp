/*
 *测试深拷贝浅拷贝
 *测试this指针
 */

#include "copy.h"
#include <iostream>
using namespace std;

Array::Array()//构造函数
{
	cout << "Array()" << endl;
}
Array::Array(int count)//构造函数
{
	m_iCount = count;
	m_pArr = new int[m_iCount];
	for(int i = 0;i<m_iCount;i++)
		m_pArr[i] = i;
	cout << "Array()" << endl;
}
Array::Array(int count,int len)//构造函数
{
	m_iCount = count;
	m_pArr = new int[m_iCount];
	for(int i = 0;i<m_iCount;i++)
		m_pArr[i] = i;
	this->len = len;//this指针赋值
	cout << "Array()" << endl;
}
Array::Array(const Array &arr)//拷贝构造函数
{
	m_iCount = arr.m_iCount;
	//m_pArr = arr.m_pArr;//浅拷贝
	m_pArr = new int[m_iCount];
	for(int i = 0;i<m_iCount;i++)//深拷贝
		m_pArr[i] = arr.m_pArr[i];

	cout << "Array &" << endl;
}
Array::~Array()//析构函数
{
	delete []m_pArr;
	m_pArr = NULL;
	cout << "~Array()" <<endl;
}
void Array::SetCount(int count)
{
	m_iCount = count;
}
void Array::SetLen(int len)
{
	this->len = len;
}
int Array::GetCount(void)
{
	return m_iCount;
}
void Array::PrintAddr(void)
{
	cout << "m_pArr = " << m_pArr << endl;
}
void Array::PrintArr(void)
{
	for(int i = 0;i<m_iCount;i++)
		cout << "m_pArr" << i << ":" << m_pArr[i] << endl;
	cout << "len = " << this->len << endl;
}
Array& Array::PrintInfo(void)//加入引用符号//注意也可以返回this，不用*this，同时函数返回值也写成Array*,而不是Array&；同样调用时用->，而不是“.”。
{
	cout << "len = " << len << endl;
	return *this;
}

void TestCopy(void)
{
	//Array arr1(1);
	//arr1.SetCount(10);
	//Array arr2(arr1);//这里会调用拷贝构造函数
	//cout << "arr2.m_iCount:" << arr2.GetCount() << endl;

	/*Array arr3(5);
	Array arr4(arr3);
	arr3.PrintAddr();
	arr4.PrintAddr();
	arr3.PrintArr();
	arr4.PrintArr();*/

	Array arr5(5,6);
	arr5.PrintArr();
	arr5.PrintInfo().SetLen(10);//注意this指针的作用，改变了arr5中len的值
	arr5.PrintInfo();


}