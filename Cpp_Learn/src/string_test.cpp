#include <iostream>
#include <stdlib.h>
#include <string>
#include "string_test.h"
using namespace std;

/******************************************************************/
/*��Ŀ������
	1.��ʾ�û���������
	2.�����û�������
	3.Ȼ�����û��ʺã�hello xxx
	4.�����û����ֵĳ���
	5.�����û����ֵ�����ĸ��ʲô
	6.����û�ֱ������س��������û�������Ϊ��
	7.����û��������imooc����ô�����û��Ľ�ɫ��һ������Ա*/
/*****************************************************8*************/

void TestString(void)
{
	string name; // ����һ���ַ���
	cout << "please input your name:";
	getline(cin,name);//�����ַ�������ֱ���ûس������name��ֵΪ��
	if(name.empty())//�ж������Ƿ�Ϊ��
	{
		cout << "input is null.." << endl;
		cout << "your name length :" << sizeof(name) << endl;//����ַ�����ռ�ռ��С
		return;
	}
	if(name == "imooc")//�ж�������Ϊimooc�������������
	{
		cout << "you are a administrator" <<endl;
	}
	cout << "hello "+ name << endl;
	cout << "your name length :" << name.size() << endl;//����ַ����ĳ���
	cout << "your name length :" << name.length() << endl;//����ַ����ĳ���
	cout << "your name length :" << sizeof(name) << endl;//����ַ����ĳ���
	cout << "your name first letter is :" << name[0] << endl;//������ַ�
}