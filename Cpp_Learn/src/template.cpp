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
	display<int>(10);//ʹ��
	display<double>(10.12);//ʹ��

	display<int>(10,20);//ʹ��
	display<float>(1.23f,4.56f);//ʹ��

	display<int, 5>(10);//ʹ��
	display<float, 5>(3.33f);//ʹ��

	MyArray<int, 5,6> arr;//ģ����
	arr.display();
}

void TestStdTemplate(void)
{
	cout << "��������" << endl;
	vector<int> vec;//ʵ��������
	vec.push_back(3);//��β����������
	vec.push_back(4);
	vec.push_back(5);
	cout << vec.size() << endl;//vec��С��Ӧ�����3

	vec.pop_back();//��β����������,����������void
	cout << vec.size() << endl;//vec��С��Ӧ�����2
	for(int i = 0;i<vec.size();i++)//��������
		cout << vec[i] << endl;

	vector<int>::iterator itor = vec.begin();//����������һ��ָ�룬ָ���һ��Ԫ��
	cout << "��������������" << endl;
	for(;itor != vec.end();itor++)//��������,vec.end()�����һ��Ԫ�ص���һ��λ��
		cout << *itor << endl;
	cout << "vec.front() = " << vec.front() << endl;//��һ��Ԫ��
	cout << "vec.back() = " << vec.back() << endl;//���һ��Ԫ��

	cout << "�������" << endl;
	list<int> list1;//����ʱһ��Ҫ������������
	list1.push_back(4);//��������β
	list1.push_back(7);
	list1.push_back(10);
	/*for(int i = 0;i<list1.size();i++)//���������ַ�ʽ��������Ϊlist�޷���������ʽ���ʣ���list[1]
		cout << list1[i] << endl;*/
	list<int>::iterator itor_list = list1.begin();//������
	cout << "�������������" << endl;
	for(; itor_list != list1.end();itor_list ++)
		cout << *itor_list << endl;


	cout << "ӳ�����" << endl;
	map<int, string> m;
	pair<int, string> p1(10,"shanghai");//�����ֵ������10��ֵ��shanghai
	pair<int, string> p2(20,"beijing");//�����ֵ������20��ֵ��beijing
	//m.pushback(p1);//ӳ����û��push_back()����
	//m.pushback(p2);
	m.insert(p1);//����mӳ����
	m.insert(p2);//ע��map�Ĳ�����һ�����νṹ�Ĳ���
	cout << m[10] << endl;//��ӡ��ֵshanghai
	cout << m[20] << endl;//��ӡ��ֵbeijing
	
	map<int,string>::iterator itor_map = m.begin();//������
	cout << "ӳ�����������" << endl;
	for(; itor_map != m.end();itor_map ++)
	{
		cout << itor_map->first << ",";
		cout << itor_map->second << endl;
	}

	map<string, string> m2;
	pair<string, string> p3("S","shanghai");//�����ֵ������10��ֵ��shanghai
	pair<string, string> p4("B","beijing");//�����ֵ������20��ֵ��beijing
	m2.insert(p3);
	m2.insert(p4);
	cout << m2["S"] << endl;//��ӡ��ֵshanghai
	cout << m2["B"] << endl;//��ӡ��ֵbeijing

	map<string,string>::iterator itor_map2 = m2.begin();//������
	cout << "ӳ�����������" << endl;
	for(; itor_map2 != m2.end();itor_map2 ++)
	{
		cout << itor_map2->first << ",";
		cout << itor_map2->second << endl;
	}


}