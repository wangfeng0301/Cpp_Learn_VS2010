#ifndef _INHERIT_H_
#define _INHERIT_H_
#include <string>
using namespace std;
class Person
{
public:
	Person();//构造函数
	~Person();//析构函数
	void eat(void);
	void play(void);
	string m_strName;
	int m_iAge;
protected:
	string m_strGender;//性别
private:
	int m_iStature;//身高
};
/*person是父类，也是基类
 *Worker是子类，也是派生类
 */
class Worker:public Person//公有继承,如果写private是私有继承，如果写protected是保护继承
{
public:
	Worker();//构造函数
	~Worker();//析构函数
	void work();
	int m_iSalary;
};

/*士兵类*/
class Soldier:public Person//公有继承person类
{
public:
	Soldier();
	//~Soldier();
	void work();
protected:
	int m_iAge;
};
/*步兵类*/
class Infantry:public Soldier
{
public:
	Infantry();
	void attack();
};

void TestInherit(void);
void TestInheritPrivate(void);
#endif