/*
 *测试继承，包括继承方式，多继承，多重继承，虚继承等等
 */
#include "inherit.h"
#include <iostream>
using namespace std;


/*
 *继承：要求：
 *1.定义person类，要求含有m_strName和m_iAge两个数据成员及构造函数、析构函数
 *2.定义worker类，要求公有继承person类，含有数据成员m_iSalary
 */
/*构造函数*/
Person::Person()
{
	m_strName = "Merry";
	cout << "Person()" << endl;
}
/*析构函数*/
Person::~Person()
{
	cout << "~Person()" << endl;
}
void Person::eat(void)
{
	m_strGender = "man";//保护数据成员可以通过成员函数访问
	m_iStature = 170;//私有数据成员可以通过成员函数访问
	cout << "eat()" << endl;
}
void Person::play(void)
{
	cout << "Person--play()" << endl;
	cout << m_strName << endl;
}

/*构造函数*/
Worker::Worker()
{
	cout << "Worker()" << endl;
}
/*析构函数*/
Worker::~Worker()
{
	cout << "~Worker()" << endl;
}
void Worker::work(void)
{
	m_strGender = "man";//公有继承时，父类protected继承到子类protected
	//m_iStature = 180;//公有继承时，父类protected继承到子类未知位置，无法访问
	cout << "work()" << endl;
}


/*构造函数*/
Soldier::Soldier()
{
	cout << "Soldier()" << endl;
}
void Soldier::work(void)
{
	m_strName = "Jim";//此成员是从其父类Person继承来
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

/*测试继承
 *要求：1.定义Person类，要求含有m_strName和m_iAge两个数据成员及构造函数和析构函数，eat函数
 *		2.定义Worker类，要求公有继承Person类，含有数据成员m_iSalary、构造函数、析构函数、work函数
 */
void TestInherit(void)
{
	/*注意构造函数、析构函数调用的顺序*/
	/*实例化时，应该是先调用父类构造函数，再调用子类构造函数*/
	/*销毁时，应该是先调用子类析构函数，再调用父类析构函数*/
	Worker *p = new Worker();
	p->m_strName = "Jim";//通过子类访问父类的数据成员
	p->m_iAge = 10;
	p->eat();//通过子类访问父类的成员函数
	p->m_iSalary = 1000;//通过子类访问自己的数据成员
	p->work();//通过子类访问自己的数据成员
	delete p;
	p = NULL;
	cout << "" << endl;

	Person person;
	person.eat();//保护数据成员和私有数据成员可以通过成员函数访问
	//person.m_strGender = "woman";//保护数据成员不可以通过外部对象访问
	//person.m_iStature = 180;//私有数据成员不可以通过外部对象访问
}

/*测试保护继承和私有继承
 *要求：1.定义Person类，要求含有m_strName和m_iAge两个数据成员及构造函数和析构函数，play函数
 *		2.定义Soldier类，数据成员：m_iAge,成员函数：构造函数，析构函数，work
 *		3.Infantry步兵类，成员函数：attack()
 */
void TestInheritPrivate(void)
{
	Soldier soldier;

}