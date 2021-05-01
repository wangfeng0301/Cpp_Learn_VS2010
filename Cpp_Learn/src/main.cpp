#include <iostream>
#include <stdlib.h>
#include "test.h"
#include "string_test.h"
#include "packaging_test.h"
#include "coordinate.h"
#include "line.h"
#include "copy.h"
#include "inherit.h"
#include "virtual.h"
#include "interface.h"
#include "rtti.h"
#include "template.h"

using namespace std;

#if 0
namespace A
{
	int x =1;
	void fun()
	{
		cout << "A" << endl;
	}
}
namespace B
{
	int x =2;
	void fun()
	{
		cout << "B" << endl;
	}
	void fun1()
	{
		cout << "B::fun1" << endl;
	}
}

using namespace B;//之后的使用中，如果不指定函数的namespace，则默认使用B中的函数
int main(void)
{
	cout << A::x << endl;
	B::fun();
	fun1();
	/*cout << "请输入一个整数:" <<endl;
	int x = 0;
	cin >> x;
	cout << oct << x << endl;
	cout << dec << x << endl;
	cout << hex << x << endl;
	
	cout << "请输入一个布尔值（0/1）" << endl;
	bool y = false;
	cin >> y;
	cout << boolalpha << y << endl;
	*/
	system("pause");
	return 0;
}
#endif

int main()
{
	/*int arr[4] = {1,5,20,12};
	bool isMax = false;
	cin >> isMax;
	cout << CompA::GetMinOrMax(arr, 4, isMax) << endl;*/

	//Test();
	//TestFun();
	//TestClass();
	//TestString();
	//TestPackaging();
	//TestObjectArray();
	//TestObjectMember();
	//TestCopy();
	//TestConst();
	//TestInherit();
	//TestInheritPrivate();
	//TestVirtual();
	//TestInterface();
	//TestRTTI();
	//TestReload();
	//TestTemplate();
	TestStdTemplate();


	system("pause");
	return 0;
}
