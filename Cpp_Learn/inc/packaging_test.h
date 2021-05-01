#ifndef _PACKAGING_H_
#define _PACKAGING_H_

#include <string>
using namespace std;
/*****************************************************/
/*          数据的封装
定义一个Student类，含有如下信息：
	1.姓名：name
	2.性别：gender
	3.学分（只读）：score
	4.学习：study      */
/*****************************************************/
class Student
{
public:
	//类的声明
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