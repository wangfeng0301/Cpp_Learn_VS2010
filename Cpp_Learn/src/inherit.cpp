/*
 *���Լ̳У������̳з�ʽ����̳У����ؼ̳У���̳еȵ�
 */
#include "inherit.h"
#include <iostream>
using namespace std;


/*
 *�̳У�Ҫ��
 *1.����person�࣬Ҫ����m_strName��m_iAge�������ݳ�Ա�����캯������������
 *2.����worker�࣬Ҫ���м̳�person�࣬�������ݳ�Աm_iSalary
 */
/*���캯��*/
Person::Person()
{
	m_strName = "Merry";
	cout << "Person()" << endl;
}
/*��������*/
Person::~Person()
{
	cout << "~Person()" << endl;
}
void Person::eat(void)
{
	m_strGender = "man";//�������ݳ�Ա����ͨ����Ա��������
	m_iStature = 170;//˽�����ݳ�Ա����ͨ����Ա��������
	cout << "eat()" << endl;
}
void Person::play(void)
{
	cout << "Person--play()" << endl;
	cout << m_strName << endl;
}

/*���캯��*/
Worker::Worker()
{
	cout << "Worker()" << endl;
}
/*��������*/
Worker::~Worker()
{
	cout << "~Worker()" << endl;
}
void Worker::work(void)
{
	m_strGender = "man";//���м̳�ʱ������protected�̳е�����protected
	//m_iStature = 180;//���м̳�ʱ������protected�̳е�����δ֪λ�ã��޷�����
	cout << "work()" << endl;
}


/*���캯��*/
Soldier::Soldier()
{
	cout << "Soldier()" << endl;
}
void Soldier::work(void)
{
	m_strName = "Jim";//�˳�Ա�Ǵ��丸��Person�̳���
	m_iAge = 20;
	cout << m_strName << endl;
	cout << m_iAge << endl;
	cout << "Soldier--work()" << endl;
}


Infantry::Infantry()
{
	cout << "Infantry()" << endl;
}
void Infantry::attack(void)
{
	m_strName = "James";
	cout << "Infantry--attack()" << endl;
}

/*���Լ̳�
 *Ҫ��1.����Person�࣬Ҫ����m_strName��m_iAge�������ݳ�Ա�����캯��������������eat����
 *		2.����Worker�࣬Ҫ���м̳�Person�࣬�������ݳ�Աm_iSalary�����캯��������������work����
 */
void TestInherit(void)
{
	/*ע�⹹�캯���������������õ�˳��*/
	/*ʵ����ʱ��Ӧ�����ȵ��ø��๹�캯�����ٵ������๹�캯��*/
	/*����ʱ��Ӧ�����ȵ������������������ٵ��ø�����������*/
	Worker *p = new Worker();
	p->m_strName = "Jim";//ͨ��������ʸ�������ݳ�Ա
	p->m_iAge = 10;
	p->eat();//ͨ��������ʸ���ĳ�Ա����
	p->m_iSalary = 1000;//ͨ����������Լ������ݳ�Ա
	p->work();//ͨ����������Լ������ݳ�Ա
	delete p;
	p = NULL;
	cout << "" << endl;

	Person person;
	person.eat();//�������ݳ�Ա��˽�����ݳ�Ա����ͨ����Ա��������
	//person.m_strGender = "woman";//�������ݳ�Ա������ͨ���ⲿ�������
	//person.m_iStature = 180;//˽�����ݳ�Ա������ͨ���ⲿ�������
}

/*���Ա����̳к�˽�м̳�
 *Ҫ��1.����Person�࣬Ҫ����m_strName��m_iAge�������ݳ�Ա�����캯��������������play����
 *		2.����Soldier�࣬���ݳ�Ա��m_iAge,��Ա���������캯��������������work
 *		3.Infantry�����࣬��Ա������attack()
 */
void TestInheritPrivate(void)
{
	Soldier soldier;

}