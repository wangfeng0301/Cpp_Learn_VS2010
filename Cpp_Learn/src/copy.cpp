/*
 *�������ǳ����
 *����thisָ��
 */

#include "copy.h"
#include <iostream>
using namespace std;

Array::Array()//���캯��
{
	cout << "Array()" << endl;
}
Array::Array(int count)//���캯��
{
	m_iCount = count;
	m_pArr = new int[m_iCount];
	for(int i = 0;i<m_iCount;i++)
		m_pArr[i] = i;
	cout << "Array()" << endl;
}
Array::Array(int count,int len)//���캯��
{
	m_iCount = count;
	m_pArr = new int[m_iCount];
	for(int i = 0;i<m_iCount;i++)
		m_pArr[i] = i;
	this->len = len;//thisָ�븳ֵ
	cout << "Array()" << endl;
}
Array::Array(const Array &arr)//�������캯��
{
	m_iCount = arr.m_iCount;
	//m_pArr = arr.m_pArr;//ǳ����
	m_pArr = new int[m_iCount];
	for(int i = 0;i<m_iCount;i++)//���
		m_pArr[i] = arr.m_pArr[i];

	cout << "Array &" << endl;
}
Array::~Array()//��������
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
Array& Array::PrintInfo(void)//�������÷���//ע��Ҳ���Է���this������*this��ͬʱ��������ֵҲд��Array*,������Array&��ͬ������ʱ��->�������ǡ�.����
{
	cout << "len = " << len << endl;
	return *this;
}

void TestCopy(void)
{
	//Array arr1(1);
	//arr1.SetCount(10);
	//Array arr2(arr1);//�������ÿ������캯��
	//cout << "arr2.m_iCount:" << arr2.GetCount() << endl;

	/*Array arr3(5);
	Array arr4(arr3);
	arr3.PrintAddr();
	arr4.PrintAddr();
	arr3.PrintArr();
	arr4.PrintArr();*/

	Array arr5(5,6);
	arr5.PrintArr();
	arr5.PrintInfo().SetLen(10);//ע��thisָ������ã��ı���arr5��len��ֵ
	arr5.PrintInfo();


}