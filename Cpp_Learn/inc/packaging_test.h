#ifndef _PACKAGING_H_
#define _PACKAGING_H_

#include <string>
using namespace std;
/*****************************************************/
/*          ���ݵķ�װ
����һ��Student�࣬����������Ϣ��
	1.������name
	2.�Ա�gender
	3.ѧ�֣�ֻ������score
	4.ѧϰ��study      */
/*****************************************************/
class Student
{
public:
	//�������
	void setName(string _name);
	string getName();
	void setGender(string _gender);
	string getGender();
	int getScore(void);
	void initScore(void);
	void study(int _score);
private:
	string m_strName;
	string m_strGender;
	int m_iScore;
};

void TestPackaging(void);

#endif