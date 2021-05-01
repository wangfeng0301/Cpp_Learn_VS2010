#include <iostream>
#include <stdlib.h>
#include <string>
#include "string_test.h"
using namespace std;

/******************************************************************/
/*项目描述：
	1.提示用户输入姓名
	2.接受用户的输入
	3.然后向用户问好，hello xxx
	4.高速用户名字的长度
	5.告诉用户名字的首字母是什么
	6.如果用户直接输入回车，告诉用户的输入为空
	7.如果用户输入的是imooc，那么告诉用户的角色是一个管理员*/
/*****************************************************8*************/

void TestString(void)
{
	string name; // 定义一个字符串
	cout << "please input your name:";
	getline(cin,name);//接收字符串，若直接敲回车，则给name赋值为空
	if(name.empty())//判断输入是否为空
	{
		cout << "input is null.." << endl;
		cout << "your name length :" << sizeof(name) << endl;//输出字符串所占空间大小
		return;
	}
	if(name == "imooc")//判断名字若为imooc，输出。。。。
	{
		cout << "you are a administrator" <<endl;
	}
	cout << "hello "+ name << endl;
	cout << "your name length :" << name.size() << endl;//输出字符串的长度
	cout << "your name length :" << name.length() << endl;//输出字符串的长度
	cout << "your name length :" << sizeof(name) << endl;//输出字符串的长度
	cout << "your name first letter is :" << name[0] << endl;//输出首字符
}