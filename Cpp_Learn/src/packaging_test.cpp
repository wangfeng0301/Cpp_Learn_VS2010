#include <iostream>
#include <stdlib.h>
#include <string>
#include "packaging_test.h"
using namespace std;

/*****************************************************/
/*          数据的封装
定义一个Student类，含有如下信息：
	1.姓名：name
	2.性别：gender
	3.学分（只读）：score
	4.学习：study      */
/*****************************************************/
//********************类的定义***********************//
void Student::setName(string _name)
{
	m_strName = _name;
}
string Student::getName()
{
	return m_strName;
}
void Student::setGender(string _gender)
{
	m_strGender = _gender;
}
string Student::getGender()
{
	return m_strGender;
}
int Student::getScore()
{
	return m_iScore;
}
void Student::initScore()
{
	m_iScore = 0;
}
void Student::study(int _score)
{
	m_iScore += _score;
}
void TestPackaging(void)
{
	  Student stu;
	  stu.initScore();
	  stu.setName("zhangsan");
	  stu.setGender("女");
	  stu.study(5);
	  stu.study(3);
	  cout << "封装测试" << endl;
	  cout << stu.getName() << " "<<stu.getGender() <<" "<<stu.getScore() << endl;
} 