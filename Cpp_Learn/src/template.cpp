#include "template.h"
#include <vector>
#include <list>
#include <map>
#include <string>
#include <iostream>
using namespace std;


template <typename T>
void display(T a)
{
	cout << a << endl;
}

template <typename T>
void display(T a, T b)
{
	cout << a << endl;
	cout << b << endl;
}

template <typename T, int size>
void display(T a)
{
	for(int i = 0;i<size;i++)
		cout << a << endl;
}



void TestTemplate(void)
{
	display<int>(10);//使用
	display<double>(10.12);//使用

	display<int>(10,20);//使用
	display<float>(1.23f,4.56f);//使用

	display<int, 5>(10);//使用
	display<float, 5>(3.33f);//使用

	MyArray<int, 5,6> arr;//模板类
	arr.display();
}

void TestStdTemplate(void)
{
	cout << "向量测试" << endl;
	vector<int> vec;//实例化对象
	vec.push_back(3);//向尾部插入数据
	vec.push_back(4);
	vec.push_back(5);
	cout << vec.size() << endl;//vec大小，应该输出3

	vec.pop_back();//从尾部弹出数据,返回类型是void
	cout << vec.size() << endl;//vec大小，应该输出2
	for(int i = 0;i<vec.size();i++)//遍历向量
		cout << vec[i] << endl;

	vector<int>::iterator itor = vec.begin();//迭代器，是一个指针，指向第一个元素
	cout << "向量迭代器遍历" << endl;
	for(;itor != vec.end();itor++)//遍历向量,vec.end()是最后一个元素的下一个位置
		cout << *itor << endl;
	cout << "vec.front() = " << vec.front() << endl;//第一个元素
	cout << "vec.back() = " << vec.back() << endl;//最后一个元素

	cout << "链表测试" << endl;
	list<int> list1;//定义时一定要定义数据类型
	list1.push_back(4);//插入链表尾
	list1.push_back(7);
	list1.push_back(10);
	/*for(int i = 0;i<list1.size();i++)//不能用这种方式遍历，因为list无法用索引方式访问，如list[1]
		cout << list1[i] << endl;*/
	list<int>::iterator itor_list = list1.begin();//迭代器
	cout << "链表迭代器遍历" << endl;
	for(; itor_list != list1.end();itor_list ++)
		cout << *itor_list << endl;


	cout << "映射测试" << endl;
	map<int, string> m;
	pair<int, string> p1(10,"shanghai");//传入键值，键是10，值是shanghai
	pair<int, string> p2(20,"beijing");//传入键值，键是20，值是beijing
	//m.pushback(p1);//映射中没有push_back()函数
	//m.pushback(p2);
	m.insert(p1);//放入m映射中
	m.insert(p2);//注意map的插入是一种树形结构的插入
	cout << m[10] << endl;//打印出值shanghai
	cout << m[20] << endl;//打印出值beijing
	
	map<int,string>::iterator itor_map = m.begin();//迭代器
	cout << "映射迭代器遍历" << endl;
	for(; itor_map != m.end();itor_map ++)
	{
		cout << itor_map->first << ",";
		cout << itor_map->second << endl;
	}

	map<string, string> m2;
	pair<string, string> p3("S","shanghai");//传入键值，键是10，值是shanghai
	pair<string, string> p4("B","beijing");//传入键值，键是20，值是beijing
	m2.insert(p3);
	m2.insert(p4);
	cout << m2["S"] << endl;//打印出值shanghai
	cout << m2["B"] << endl;//打印出值beijing

	map<string,string>::iterator itor_map2 = m2.begin();//迭代器
	cout << "映射迭代器遍历" << endl;
	for(; itor_map2 != m2.end();itor_map2 ++)
	{
		cout << itor_map2->first << ",";
		cout << itor_map2->second << endl;
	}


}