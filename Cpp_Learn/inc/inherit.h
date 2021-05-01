#ifndef _INHERIT_H_
#define _INHERIT_H_
#include <string>
using namespace std;
class Person
{
public:
	Person();//���캯��
	~Person();//��������
	void eat(void);
	void play(void);
	string m_strName;
	int m_iAge;
protected:
	string m_strGender;//�Ա�
private:
	int m_iStature;//���
};
/*person�Ǹ��࣬Ҳ�ǻ���
 *Worker�����࣬Ҳ��������
 */
class Worker:public Person//���м̳�,���дprivate��˽�м̳У����дprotected�Ǳ����̳�
{
public:
	Worker();//���캯��
	~Worker();//��������
	void work();
	int m_iSalary;
};

/*ʿ����*/
class Soldier:public Person//���м̳�person��
{
public:
	Soldier();
	//~Soldier();
	void work();
protected:
	int m_iAge;
};
/*������*/
class Infantry:public Soldier
{
public:
	Infantry();
	void attack();
};

void TestInherit(void);
void TestInheritPrivate(void);
#endif