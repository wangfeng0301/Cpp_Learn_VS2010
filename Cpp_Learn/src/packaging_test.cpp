#include <iostream>
#include <stdlib.h>
#include <string>
#include "packaging_test.h"
using namespace std;

/*****************************************************/
/*          ���ݵķ�װ
����һ��Student�࣬����������Ϣ��
	1.������name
	2.�Ա�gender
	3.ѧ�֣�ֻ������score
	4.ѧϰ��study      */
/*****************************************************/
//********************��Ķ���***********************//
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
	  stu.setGender("Ů");
	  stu.study(5);
	  stu.study(3);
	  cout << "��װ����" << endl;
	  cout << stu.getName() << " "<<stu.getGender() <<" "<<stu.getScore() << endl;
} 