#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_
#include <iostream>
using namespace std;

template <typename T, int KSize, int KVal>//声明参数列表
class MyArray
{
public:
	MyArray();//构造函数
	~MyArray()//析构函数
	{
		delete []m_pArr;
		m_pArr = NULL;
	}
	void display();
private:
	T *m_pArr;
};

template <typename T, int KSize, int KVal>
MyArray<T,KSize,KVal>::MyArray()//构造函数
{
	m_pArr = new T[KSize];
	for(int i = 0;i < KSize;i++)
		m_pArr[i] = KVal;
}
template <typename T, int KSize, int KVal>
void MyArray<T,KSize,KVal>::display()//注意这种定义格式
{
	for(int i = 0;i < KSize;i++)
		cout << m_pArr[i] << endl;
}
void TestTemplate(void);
void TestStdTemplate(void);
#endif