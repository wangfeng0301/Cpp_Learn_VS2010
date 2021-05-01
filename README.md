﻿# Cpp_Learn_VS2010
C++基础知识
1.C++远征之起航篇 https://www.imooc.com/video/6837
2.C++远征之离港篇 https://www.imooc.com/video/7471
	第2章 C++语言引用
	2.1 C++语言引用
	2.2 C++语言引用代码演示
	2.3 练习
	2.4 单元巩固
	总结：和C语言相比，别名和引用本质上就是指针的应用。

	第3章 C++的const关键字
	3.1 C++语言-const
	3.2 const代码演示
	3.3 练习
	3.4 单元巩固
	总结：和C语言相比，是一样的。const放在谁前面，谁就是常量，不可变。

	第4章 C++的函数新亮点
	4.1 函数特性
	4.2 函数特性代码演示
	4.3 练习
	4.4 单元巩固
	总结1：有默认参数值的参数必须在从参数表的最右端开始。
	总结2：函数声明写默认值，函数定义不写默认值。（确保所有编译器可以编译过）
	总结3：函数有默认值，在调用时就可以只赋值前面的参数。如声明：
		void func(int a = 1, int b = 2, int c = 3);
		调用时可这样调用：
		func(3);//参数b和c用默认值
		func(3,4);//参数c用默认值
		func(3,4,5);
	总结4：函数重载，要求函数名相同，且参数可辨。编译器是通过传入参数的类型和个数区分调用哪个函数的。
	总结5：内联函数，用inline修饰。编译器编译时直接将内联函数编译到调用处，去掉了调用和返回的过程。
		特点：内联函数是建议性的，由编译器决定。
		优点：效率高，速度快。
		条件：不能是递归函数；尽量简单，不能包含for循环和while循环等。

	第5章 C++的内存管理
	5.1 内存管理
	5.2 内存管理代码演示
	5.3 练习
	5.4 单元巩固
	总结1：使用new申请内存；使用delete释放内存；
	总结2：申请块内存：int *arr = new int[10];释放块内存：delete []arr;
	总结3：注意释放完内存后，指针需要指向NULL。

3.C++远征之封装篇（上） https://www.imooc.com/video/7457
	第1章 课程介绍
	
	第2章 类与对象初体验
	2.1 C++类和对象
	2.2 C++类对象的定义
	总结1：关键字class定义类；类包括成员函数和数据成员。
	总结2：访问限定符：public，private，protected.
	总结3：实例化对象两种方式：从堆中实例化对象；从栈中实例化对象。
	总结4：对象成员的访问（与C语言访问结构体一样）：栈实例化对象访问方式，tv.type;堆实例化对象访问方式，tv->type;

	第3章 初始字符串类型
	总结1：使用string类型需要加<string>头文件；
	总结2：string是一个类，其大小由编译器决定，vs2010编译为32字节（用sizeof计算，无论字符串是否为空）。
	总结3：初始化string对象的方式：
		string s1;//s1为空串
		string s2("ABC");//用字符串字面值初始化s2
		string s3(s2);//将s3初始化为s2的一个副本
		string s4(n,'c');//将s4初始化为字符‘c’的n个副本，如n=3则s4=ccc
	总结4：string常用操作：
		s.empty()//若s为空串，返回true，否则返回false
		s.size()//返回s中字符的个数，
		s[n]//返回s中位置为n的字符，位置从0开始
		s1+s2//将两个串连接成新串，返回新生成的串。注意不能直接用两个双引号字符串相加，如"hello"+"world"是不允许的。
		s1 = s2//把s1的内容替换为s2的副本
		s1 == s2//判定两个字符串相等，相等返回true，否则返回false
		s1 != s2//判定两个字符串不等，不等返回true，否则返回false

	第4章 属性封装的艺术
		总结1：面向对象的基本思想：数据封装成函数，调用函数。

	第5章 精彩的类外定义
	总结1：类内定义：函数在类内部定义，编译器优先将函数编译为内联函数，而省去inline关键字。
	总结2：类外定义：成员函数的函数体写在类的外面。分为：同文件类外定义和分文件类外定义。
	总结3：同文件类外定义，需要用“::”连接。
	总结4：分文件类外定义，一般都采用分文件类外定义。类的声明放在“.h”文件中，而成员函数实现在“.c”文件中。

	第6章 对象的生离死别
	6.1 构造函数讲解
	6.2 构造函数代码演示
	总结1：内存分区：栈区，堆区，全局区，常量区，代码区。
	总结2：类在实例化之前是不会占用内存的（与C语言中的结构体一样）；类的成员函数放在代码区。
	总结3：构造函数的规则和特点：
		1.构造函数在对象实例化时被自动调用；
		2.构造函数与类通同名；
		3.构造函数没有返回值；
		4.构造函数可以有多个重载形式；
		5.实例化对象时仅用到一个构造函数；
		6.当用户没有定义构造函数时，编译器自动生成一个构造函数；
		7.构造函数定义时，可直接给参数赋默认值；


	6.4 构造函数初始化列表
	6.5 初始化列表编码
	class Student
	{
	public:
	    Student():m_strName("Jim"),m_iAge(10){}
	private:
	    string m_strName;
	    int m_iAge;
	};
	类外定义构造函数：Student::Student(string name,int age):m_strName(name),m_iAge(age)
	总结3：默认构造函数：实例化对象时，不需要传递参数的构造函数就是默认构造函数。
	总结4：初始化列表特性：
		1.初始化列表先于构造函数执行；
		2.初始化列表只能用于构造函数；
		3.初始化列表可同时初始化多个数据成员，速度快，效率高；
	总结5：初始化列表的重要性：如果类中参数被const修饰，则该参数只能通过初始化列表初始化，而不能通过构造函数初始化。
	6.7 拷贝构造函数
	6.8 拷贝构造函数的代码演示
	总结6：定义格式：类名(const 类名 &变量名){}
	总结7：拷贝构造函数特点：
		1.若没有定义拷贝构造函数，则系统自动生成一个默认拷贝构造函数；
		2.当采用直接初始化或复制初始化实例化对象时，系统自动调用拷贝构造函数；
	6.10 析构函数
	6.11 析构函数代码演示
	总结8：什么作用？销毁对象时，归还系统内存资源；
	总结9：何时调用？释放对象时。（无论从栈中实例化对象还是堆中实例化对象，都会在释放时调用。）
	总结10：定义格式：~类名()
	总结11：特性
		1.若没有定义析构函数，则系统自动生成析构函数；
		2.析构函数在对象销毁时自动调用；
		3.析构函数没有返回值，没有参数，也不能重载；
	总结12：做什么？在数据成员中有指针，且构造函数初始化时，在堆中申请内存的，析构函数中需要做释放的操作。

	第7章 课程总结


4.C++远征之封装篇（下） https://www.imooc.com/
	第2章 对象成员与对象数组
	2.1 对象数组
	2.2 对象数组实践（一）
	2.3 对象数组实践（二）
	总结1：与C语言的结构体一样。可在堆中和栈中实例化对象数组。
	2.5 对象成员
	2.6 对象成员实践（一）
	2.7 对象成员实践（二）
	总结1：对象成员即类中的成员为其他类的对象。
	总结2：实例化对象时，先实例化对象成员，即先实例化内部的，再实例化外部的；销毁时，先销毁外部的，再销毁内部的。
	总结3：大的类对象在初始化时，小的类对象一定要有初始化。

	第3章 深拷贝和浅拷贝
	3.1 深拷贝浅拷贝
	3.2 浅拷贝实践
	3.3 深拷贝实践
	总结1：参考6.7拷贝构造函数，复制初始化实例化对象时，自动调用拷贝构造函数；
	总结2：浅拷贝：只是单纯拷贝参数；深拷贝：成员变量是指针，且在构造函数中从堆中实例化指针成员变量时，用深拷贝。深拷贝不仅只拷贝参数，还会将指针指向的地址中的内容拷贝。
	
	第4章 对象指针
	4.1 对象指针
	4.2 对象指针实践
	总结1：对象指针，即一个指向对象的指针。
	总结2：C++的new和C语言的malloc的区别：new会自动调用相关对象的函数；malloc只是单纯的分配内存。
	
	4.4 对象成员指针
	4.5 对象成员指针实践
	总结1：对象成员指针，即对象的指针作为另外一个类的数据成员。
	总结2：使用对象成员指针时，构造函数中申请内存，析构函数中释放内存。
	总结3：用sizeof计算对象大小时，只计算数据成员的大小，不包含成员函数的大小。

	4.6 this指针
	4.7 this指针实践（一）
	4.7 this指针实践（二）
	总结1：this指着，指向对象自身数据的指针。如实例化一个对象Array arr1,则this就是&arr1.
	总结2：this指针在参数列表中的位置：

	第5章 const再现江湖
	5.1 常对象成员和常成员函数
	5.2 常对象成员和常成员函数实践
	5.3常指针与常引用
	总结1：常对象成员，即类中的数据成员用const修饰。常对象成员只能用初始化列表进行初始化。
	总结2：常成员函数，即类中的成员函数用const修饰。常成员函数用const修饰时，将const放在函数后面，如void changeX() const;
	总结3：常成员函数与普通成员函数互为重载，如果想使用常成员函数，则对象必须为常对象。
	总结4：常对象只能调用常成员函数，不能调用普通成员函数；
	总结5：普通对象能够调用常成员函数，也能够调用普通成员函数；
	总结6：常指针和常引用都只能调用对象的常成员函数。
	

5.C++远征之继承篇 https://www.imooc.com/learn/426
	第2章 为什么继承
	2.1 为什么继承
	2.2 代码演示
	总结1：为什么继承？为了减少工作量；
	总结2：大范围类继承小范围类，如工人类继承人类；工人类是人类的派生类，人类是工人类的基类；或说工人类是子类，人类是父类。
	总结3：两个类之间必须有逻辑上的关系。如人，工人，农民等。
	总结4：实例化时，应该是先调用父类构造函数，再调用子类构造函数；销毁时，应该是先调用子类析构函数，再调用父类析构函数
	总结5：公有继承时，子类可以访问父类的数据成员和成员函数。

	第3章 继承方式
	3.1 公有继承
	3.2 公有继承代码演示
	3.3 保护继承和私有继承
	总结1：继承格式：
		1.公有继承：class A:public B
		2.保护继承：class A:protected B
		3.私有继承：class A:private B
	总结2：公有继承时，父类public继承到子类public；父类protected继承到子类protected；父类private继承到子类不可见位置，无法访问。
	       保护继承时，父类public继承到子类protected；父类protected继承到子类protected；父类private继承到子类不可见位置，无法访问。
	       私有继承时，父类public继承到子类private；父类protected继承到子类private；父类private继承到子类不可见位置，无法访问。
	总结3：类中的保护数据成员和私有数据成员可以通过本类的成员函数访问；但是不能被外部访问。
	总结4：Has a关系，是包含关系。

	第4章 继承中的特殊关系
	4.1 隐藏
	4.2 隐藏代码演示
	总结1：隐藏概念：子类和父类中有重名的成员函数或数据成员，子类会隐藏掉父类中的成员函数或数据成员。（非虚构函数）
	总结2：如父类A和子类B中都有函数void play(),则子类访问子类的成员函数为B.play();子类访问父类的成员函数为A.B::play()
	总结3：继承关系的两个类中，只有函数名相同，参数不同时，同样构成隐藏条件。
	4.4 is A
	总结1：is A是一种关系，如父类是人，两个子类分别是工人和士兵，则可以称工人是一个人，士兵是一个人。
	总结2：Soldier s1;
	       Person p1 = s1;//正确，派生类对象可以赋值给基类
	       Person *p2 = &s1;//正确，基类的指针可以指向派生类的对象
	       s1 = p1;//错误，基类不可以赋值给派生类
	       Soldier *s2 = &p1;//错误，派生类的指针不可以指向基类的对象
	总结3：函数参数如果以基类作为参数，则可以传入派生类作为实参。
	总结4：用父类指针指向堆中子类对象时，释放父类指针时，只会调用父类的析构函数，不会调用子类的虚构函数，这就可能造成内存泄露，
	       这时需要在父类中引入虚析构函数，virtual ~Person();这时再释放父类指针时，就先调用子类析构函数，再调用父类析构函数。
	总结5：父类中为虚析构函数，则子类中自动继承为虚析构函数，建议在子类虚构函数前也加上virtual关键字。

	第5章 多继承与多重继承
	5.1 多继承和多重继承
	5.2 多重继承代码演示
	5.3 多继承
	总结1：多重继承：父类是人类，士兵继承人类，步兵继承士兵，则称为多重继承；
	总结2：多继承：工人类和农民类是并列的，农民工类即继承工人类，又继承农民类，则称为多继承。（1个派生类继承多个基类）
	总结3：多继承写法：class MigrantWorker:public Worker,public Farmer
	总结4：多重继承中，无论继承层级多少，直接父类子类的操作和间接父类子类的操作是相同的。
	总结5：MigranWorker::MigrantWorker(string name,string code):Farmer(name),Worker(code)//初始化列表初始化农民工类
	总结6：多继承时，实例化子类时，先依次调用父类的构造函数，最后调用子类的构造函数。
	总结7：多继承时，销毁子类时，先调用子类的析构函数，最后依次调用父类的析构函数。


	第6章 虚继承
	菱形继承：类B和类C继承类A，类D继承类B和类C。如工人和农民继承人类，农名工又继承工人和农民类。
	问题：D中将含有两份完全一样的A类的数据这是不允许的。
	解决：引入虚继承，如：class Worker:virtual public Person
			      class Farmer:virtual public Person
	      然后名民工类就可以正常继承，MigranWorker::MigrantWorker(string name,string code):Farmer(name),Worker(code)//初始化列表初始化农民工类
	
	总结1：虚继承时，实例化D类，只调用1次A类构造函数，同样释放D类时，只调用1次A类析构函数。
	总结2：虚继承时，菱形继承中，顶层父类没有进行参数传递，顶层父类只使用了默认的参数。

6.C++远征之多态篇 https://www.imooc.com/learn/474
	第1章 C++多态概念
	总结：不同对象接收到同样的消息，或相同对象收到不同消息时，产生不同的动作，称为多态。

	第2章 虚函数及实现原理
	2.1 虚函数
	2.2 虚函数代码示例
	静态多态（早绑定）：如下例子，两个互为重载的函数，在编译时已经确定，调用时通过不同参数调用不同函数，称为早绑定，也叫静态多态。
		class Rect
		{
    		public:
        	    int calcArea(int width);
        	    int calcArea(int width, int height);//互为重载的两个函数，计算面积
		};
		int main(void)
		{
		    Rect rect;
		    rect.calcArea(10);
		    rect.calcArea(10,20);
		}
	动态多态（晚绑定）：
		class Shape
		{
		public:
		    double calcArea()
		    {
		        cout << "calcArea" << endl;
		        return 0;
		    }
		};
		class Circle:public Shape//圆形公有继承Shape类
		{
		public:
		    Circle(double r);//构造函数
		    double calcArea()
		    {
		        return 3.14*m_dR*m_dR;
		    }
		private:
		    double m_dR;
		};
		class Rect:public Shape//矩形类公有继承Sheap类
		{
    		public:
        	    Rect(double width, double height);//构造函数
        	    double calcArea()
		    {
		        return m_dWidth*m_dHeight;
		    }
		private:
		    double m_dWidth;
		    double m_dHeight;
		};
		int main(void)//调用
		{
		    Shape *shape1 = new Circle(4.0);//实例化父类shape,用子类Circle赋值
		    Shape *shape1 = new Rect(3.0, 5.0);//实例化父类shape,用子类Rect赋值
		    shape1->calcArea();//输出结果为父类的计算面积函数，期望输出Circle类的计算面积函数
		    shape2->calcArea();//输出结果为父类的计算面积函数，期望输出Rect类的计算面积函数
		    return 0;
		}
	想要实现上面main函数中调用的期望结果，必须将父类中的计算面积函数定义为虚函数，即用关键字virtual修饰。如下：
		class Shape
		{
		public:
		    virtual double calcArea()//定义为虚函数，以实现多态
		    {
		        cout << "calcArea" << endl;
		        return 0;
		    }
		};
		class Circle:public Shape//圆形公有继承Shape类
		{
		public:
		    Circle(double r);//构造函数
		    virtual double calcArea()//定义为虚函数，此处virtual关键字不是必须的，但建议加上，方便阅读
		    {
		        return 3.14*m_dR*m_dR;
		    }
		private:
		    double m_dR;
		};
		class Rect:public Shape//矩形类公有继承Sheap类
		{
    		public:
        	    Rect(double width, double height);//构造函数
        	    virtual double calcArea()//定义为虚函数，此处virtual关键字不是必须的，但建议加上，方便阅读
		    {
		        return m_dWidth*m_dHeight;
		    }
		private:
		    double m_dWidth;
		    double m_dHeight;
		};
		int main(void)//调用
		{
		    Shape *shape1 = new Circle(4.0);//实例化父类shape,用子类Circle赋值
		    Shape *shape2 = new Rect(3.0, 5.0);//实例化父类shape,用子类Rect赋值
		    shape1->calcArea();//已经定义虚函数，输出Circle类的计算面积函数
		    shape2->calcArea();//已经定义虚函数，期望输出Rect类的计算面积函数
		    return 0;
		}
	动态多态必须以封装和继承为基础。
	虚函数：用关键字virtual修饰的函数。
	总结：多态具体到语法中是指，使用父类指针指向子类对象，并可以通过该指针调用子类的方法。
	
	2.4 虚析构函数
	2.5 虚析构函数代码示例
	动态多态存在的问题：内存泄露。运行上一节的例子，可以发现释放父类指针时，只调用了父类的析构函数，而没有调用子类的析构函数，所以可能造成内存泄露。
	解决方法：定义虚析构函数，即用关键字virtual修饰析构函数。这样在释放父类指针时，先调用子类析构函数，再调用父类析构函数。
	总结1：virtual使用的限制：
		1.普通函数不能是虚函数，即被修饰的函数必须是某个类的成员函数，不能是全局函数。
		2.静态成员函数不能是虚函数，即被static西修饰的成员函数不能用virtual修饰。
		3.内联函数不能是虚函数，即被inline修饰的函数不能被virtual 修饰。如果这样，编译器会忽略掉inline。
		4.构造函数不能为虚函数。
	
	2.7 虚函数和虚析构函数原理
	2.8 虚函数表示例一
	2.9 虚函数表示例二
	总结1：虚函数表指针，父类中有虚函数时，实例化父类对象时，除了数据成员，还会有另外一个数据成员，即虚函数表指针。虚函数表指针指向虚函数表，虚函数表中存放每个虚函数的入口地址。
	总结2：子类中不包含父类的虚函数，只继承父类的虚函数时，子类调用calaArea函数时，调用的父类calaArea函数。
		class Shape
		{
		public:
		    virtual double calcArea()//定义为虚函数，以实现多态
		    {
		        cout << "calcArea" << endl;
		        return 0;
		    }
		protected：
		    double m_iEdge;
		};
		class Circle:public Shape//圆形公有继承Shape类
		{
		public:
		    Circle(double r);//构造函数
		    //子类中没有calcArea函数，该函数从父类中继承
		private:
		    double m_dR;
		};
		Shape类
			vftable_ptr(虚函数表指针，指向虚函数表)   ->     ...(假设虚函数表起始地址为0xCCFF)
			m_iEdge                                          calcArea_ptr(虚函数指针，指向虚函数)   ->     calaArea()(实际函数，假设地址为0x3355)
		Circle类(继承了父类Shape的虚函数)
			vftable_ptr(虚函数表指针，指向虚函数表)   ->     ...(假设虚函数表起始地址为0x6688)
			m_iEdge                                          calcArea_ptr(虚函数指针，指向虚函数)   ->     calaArea()(实际函数，假设地址为0x3355)
			m_dR
		所以子类调用calaArea函数时，调用的父类calaArea函数，因为虚函数表中指针指向了父类的calaArea函数。

	总结3：子类中定义和父类的同样的虚函数，子类调用calaArea函数时，调用自己的calaArea函数。
		class Shape
		{
		public:
		    virtual double calcArea()//定义为虚函数，以实现多态
		    {
		        cout << "calcArea" << endl;
		        return 0;
		    }
		protected：
		    double m_iEdge;
		};
		class Circle:public Shape//圆形公有继承Shape类
		{
		public:
		    Circle(double r);//构造函数
		    virtual double calcArea();//子类中定义了calcArea函数
		private:
		    double m_dR;
		};
		Shape类
			vftable_ptr(虚函数表指针，指向虚函数表)   ->     ...(假设虚函数表起始地址为0xCCFF)
			m_iEdge                                          calcArea_ptr(虚函数指针，指向虚函数)   ->     calaArea()(实际函数，父类的，假设地址为0x3355)
		Circle类(继承了父类Shape的虚函数)
			vftable_ptr(虚函数表指针，指向虚函数表)   ->     ...(假设虚函数表起始地址为0x6688)
			m_iEdge                                          calcArea_ptr(虚函数指针，指向虚函数)   ->     calaArea()(实际函数，子类自己的，假设地址为0x4B2C)
			m_dR
		所以子类调用calaArea函数时，调用的自己的calaArea函数，因为虚函数表中指针指向了自己的calaArea函数。

	总结4：函数的覆盖：参考总结3，如果子类中有和父类相同的虚函数，则在子类虚函数表中将父类虚函数的函数指针覆盖掉，替换成子类自己的虚函数指针。
	总结5：虚析构函数理论前提：执行完子类的析构函数就会执行父类的析构函数。
	总结6：对象的大小：
		1.对象的大小只计算数据成员的大小，不包括成员函数。
		2.对于一个数据成员都没有的类（不包含虚函数和虚析构函数），C++用1个字节内存单元标的，也就是用sizeof(shape)计算结果为1（假设Shape类中没有数据成员）.
		3.对于一个数据成员都没有的类（包含虚函数或虚析构函数），sizeof(shape)计算结果为4，因为包含了一个虚函数表指针.
		4.对于子类，如果继承的父类中有虚析构函数，则子类会继承到虚析构函数，则子类中会产生虚函数表指针，则其大小会加4.
		5.总之，如果类中存在虚函数，则一定会产生一个虚函数表指针，该指针占据4字节。且虚函数表指针占据对象的前4个位置。
	总结7：对象的地址：对象的首地址是第一个数据成员的地址。
	总结8：对象成员的地址：
	总结9：虚函数表指针：如果类中存在虚函数，则一定会产生一个虚函数表指针，该指针占据4字节。且虚函数表指针占据对象的前4个位置。


	第3章 纯虚函数和抽象类
	3.1 纯虚函数抽象类
	3.2 抽象类代码示例
	总结1：纯虚函数定义：没有函数体，同时在函数后面加“=0”，如下：
		virtual double calcPerimeter() = 0;//纯虚函数
	总结2：纯虚函数实现原理：即在虚函数表中，将纯虚函数的指针指向0。
	总结3：抽象类：包含纯虚函数的类叫做抽象类。抽象类不允许实例化对象。
	总结4：抽象类的子类，只有在子类中将抽象类中所有纯虚函数都具体实现了，子类才能实例化对象。否则子类也将是抽象类。
	总结5：个人认为，纯虚函数和抽象类只是为了给不确定的函数预留位置，如人类作为父类，其work函数是不确定的，此时就可以将work定义为纯虚函数；工人作为子类继承人类，工人的工作可以确定，这时在子类工人类中再去实现work函数。

	3.5 接口类
	3.6 接口类代码示例
	总结1：接口类定义：如果抽象类中仅含有纯虚函数，不含有其他任何东西，这样的类叫做接口类。如下示例
		class Shape
		{
		public:
		    virtual double calcArea() = 0;
		    virtual double calcPerimeter() = 0;
		}
	总结2：接口类更多的表达一种能力或协议。


	第4章 运行时类型识别(RTTI)
	4.1 RTTI（Run-Time Type Identification,运行时类型识别）
	4.2 RTTI代码示例
	总结1：使用typeid和dynamic_cast使函数能够动态识别传入的指针类型，从而调用不同函数。如下：
		class Flyable
		{
		public:
		    virtual void takeoff() = 0;//虚函数，降落
		    virtual void land() = 0;//虚函数，起飞
		};
		class Bird:public Flyable
		{
		public:
		    void foraging(){...}
		    virtual void takeoff(){...}
		    virtual void land(){...}
		};
		class Plane:Flyable
		{
		public:
		    void carry(){...}
		    virtual void takeoff(){...}
		    virtual void land(){...}
		};
		/*全局函数*/
		void doSomething(Flyable *obj)
		{
		    obj->takeoff();
		    cout << typeid(*obj).name() << endl;//注意这里typeid的用法，它可以返回类名称
		    if(typeid(*obj) == typeid(Bird))//比较是哪个类
		    {
		        Bird *bird = dynamic_cast<Bird *>(obj);//注意这里dynamic_cast的用法，可以动态转换成对应的类型
		        bird->foraging();//转换成Bird指针后，可以调用Bird中的函数
		    }
		    obj->land();
		}
	总结2：使用dynamic_cast注意事项：
		1.只能应用于指针和引用的转换；
		2.要转换的类型中必须包含虚函数；
		3.转换成功返回子类地址，失败返回NULL;
	总结3：typeid注意事项
		1.type_id返回一个type_info对象的引用；
		2.如果想通过基类的指针获得派生类的数据类型，基类必须带有虚函数；
		3.只能获取对象的实际类型；
	总结4：type_info原型
		class type_info
		{
		public:
		    const char *name() const;
		    bool operator == (const type_info &rhs) const;//运算符重载
		    bool operator != (const type_info &rhs) const;
		    int before(const type_info &rhs) const;
		    virtual ~type_info();
		private:
		    ...
		}
	
	第5章 异常处理
	5.1 异常处理
	5.2 异常处理代码示例
	总结1：关键字：try ... catch ...      throw
	               尝试     捕获          抛出
		try
		{fun1();}
		catch(int)//接收int型异常
		{...}
		catch(double)//接收double异常
		{...}
		catch(...)//不是省略号，表示可以接收所有异常
		{...}
		////////////////////////////////////////////
		try
		{throw string("invalid index");}//抛出字符串异常
		catch(string &aval)//接收抛出的字符串，注意必须写成string &aval
		{...}
	总结2：常见异常
		1.数组下标越界；
		2.除数为0；
		3.内存不足；
	总结3：异常和多态的关系

7.C++远征之模板篇 https://www.imooc.com/learn/477
	第1章 课程简介
	第2章 友元函数和友元类
	2.1 友元函数
	2.2 友元函数编码实现
	友元全局函数
		class Coordinate
		{
		    /*声明全局友元函数*/
		    /*友元函数用关键字friend修饰*/
		    /*友元函数的作用就是可以访问到类的私有成员，具体见函数实现*/
		    /*个人理解：友元函数声明类似与C语言中extern声明*/
		    friend void printfXY(Coordinate &c);
		public:
		    Coordiname(int x, int y);
		private:
		    int m_iX;
		    int m_iY;
		}
		void printfXY(Coordinate &c)
		{
		    /*友元函数可以访问到其他类的私有数据成员*/
		    cout << c.m_iX << c.m_iY;
		}
		/*应用*/
		int main(void)
		{
		    Coordinate coor(3,5);//实例化并初始化
		    printfXY(coor);//调用友元函数打印Coordinate类的私有数据成员。
		}
	友元成员函数
		class Coordinate
		{
		    /*声明友元成员函数*/
		    /*友元函数用关键字friend修饰*/
		    /*友元成员函数的作用就是在其他类的成员函数可以访问本类的私有成员*/
		    /*如本例就是Circle类中的成员函数printXY可以调用Coordinate类中的私有数据成员*/
		    /*个人理解：友元函数声明类似与C语言中extern声明*/
		    friend void Circle::printfXY(Coordinate &c);
		public:
		    Coordiname(int x, int y);
		private:
		    int m_iX;
		    int m_iY;
		}
		class Circle
		{
		public:
		    void printfXY(Coordinate &c)
		    {
		        /*友元函数可以访问到其他类的私有数据成员*/
		        cout << c.m_iX << c.m_iY;
		    }
		}
		/*应用*/
		int main(void)
		{
		    Coordinate coor(3,5);//实例化并初始化
		    Circle circle;
		    circle.printXY(coor);//调用友元函数打印Coordinate类的私有数据成员。
		}
	总结1：友元函数破坏了函数的封装性，除非特殊情况，否则不建议使用友元函数。
	总结2：friend关键字与public、private等关键字不冲突，友元函数可以定义在public下，也可以定义在private下，但建议定义在这些关键字的外面。

	2.4 友元类
	2.5 友元类代码示例
	总结1：友元类可以任意访问本类的成员函数和数据成员。
	总结2：
		1.友元关系不可传递。
		2.友元关系的单向性（A是B的友元还是B是A的友元）；
		3.友元声明的形式及数量不受限制；
		4.友元只是封装的一种补偿，他会破坏封装性。

	第3章 static
	3.1 静态
	3.2 静态编码示例
	总结1：用static修饰的成员函数称为静态静态成员函数；用static修饰的数据成员称为静态数据成员。
		class Tank
		{
		public:
		    Tank(){s_iCount++;}//在构造函数中将静态数据成员加1，即创建对象时数量加1，构造函数不能初始化静态数据成员。
		    ~Tank(){s_iCount--;}//在析构函数中将静态数据成员减1，即销毁对象时数量减1
		    static int getCount(){return s_iCount;}//静态成员函数可以调用静态数据成员
		    static int s_iCount;//静态数据成员
		private:
		    string m_strCode;//私有数据成员
		};
		int Tank::s_iCount = 0;//初始化静态数据成员

	总结2：静态数据成员和静态成员函数，不依赖于对象，而依赖于类。即使不实例化对象，静态数据成员依然是存在的，
	总结3：访问静态数据成员方法：1.用类+“::”；2.用对象+“.”，如下面代码：
		int main()
		{
		    cout << Tank::getCount() << endl;//用类访问静态成员函数
		    cout << Tank::s_iCount << endl;//用类访问静态数据成员
		    Tank tank;
		    cout << tank.getCount() << endl;//用对象访问静态成员函数
		    cout << tank.s_iCount << endl;//用对象访问静态数据成员
		    return 0;
		}
	总结4：静态成员函数无法调用非静态成员函数和数据成员；但可以调用静态数据成员和成员函数。
	总结5：非静态的成员函数可以调用静态的数据成员和成员函数。
		class Tank
		{
		public:
		    static int getCount()
		    {
		        //m_strCode = "01";//错误的调用方式，静态成员函数不能调用普通数据成员。因为普通数据成员以来对象，而静态数据成员和成员函数不依赖对象，只依赖类。
		        return s_iCount;//静态成员函数可以调用静态数据成员
		    }
		    static int s_iCount;//静态数据成员
		private:
		    string m_strCode;//私有数据成员
		};
		int Tank::s_iCount = 0;//初始化静态数据成员
	总结6：静态数据成员只有一份，且不依赖对象而存在，即如果用sizeof计算对象的大小的话，其一定不包含静态数据成员的大小。
	总结7：静态数据成员必须单独初始化。

	第4章 运算符重载
	4.1 一元运算符重载
	4.2 一元运算符编码实现
	4.3 一元运算符编码实现
	总结1：运算符重载的本质就是函数重载。
	总结2：一元运算符就是只对一个操作数进行运算，如-（负号），++，--等。
	总结3：一元运算符重载两种方法：友元函数重载和成员函数重载。
		//成员函数重载，以-（符号）为例
		class Coordinate
		{
		public:
		    Coordinate(int x, int y);//构造函数
		    Coordinate &operator-();//-(符号)重载声明，注意一定要用关键字operator
		private:
		    int m_iX;
		    int m_iY;
		};
		Coordinate &Coordinate::operator-()//符号重载实现
		{
		    m_iX = -m_iX;
		    m_iY = -m_iY;
		    return *this;//注意这里隐藏了this指针
		}
		int main()//重载符号的应用
		{
		    Coordinate coor1(3,5);
		    -coor1;//等价于coor1.operator-();
		    return 0;
		}

		//友元函数重载，以-（符号）为例
		class Coordinate
		{
		    friend Coordinate &operator-(Coordinate &coor);//-(符号)重载声明，注意与成员函数重载的不同，这里需要加参数
		public:
		    Coordinate(int x, int y);//构造函数
		private:
		    int m_iX;
		    int m_iY;
		};
		Coordinate &operator-(Coordinate &coor)//符号重载实现，注意友元函数实现与成员函数的不同
		{
		    coor.m_iX = -coor.m_iX;
		    coor.m_iY = -coor.m_iY;
		    return coor;//注意这里隐藏了this指针
		}
		int main()//重载符号的应用
		{
		    Coordinate coor1(3,5);
		    -coor1;//等价于operator-(coor1);//注意对比与成员函数调用的区别
		    return 0;
		}
	总结4：前置++运算符与后置++运算符的重载，以成员函数实现为例
		class Coordinate
		{
		public:
		    Coordinate(int x, int y);//构造函数
		    Coordinate &operator++();//前置++重载声明，注意一定要用关键字operator
		    Coordinate operator++(int);//后置++重载声明，注意与前置++的区别，参数里面有类型，表示后置重载，注意只有类型没有参数
						//注意返回的类型不再是引用，因为返回的是++之前的值
		private:
		    int m_iX;
		    int m_iY;
		};
		Coordinate &Coordinate::operator++()//前置++符号重载实现
		{
		    m_iX ++;
		    m_iY ++;//调用完此函数之后，外面接收到的值就是++之后的值
		    return *this;//注意这里隐藏了this指针
		}
		Coordinate Coordinate::operator++(int)//后置++符号重载实现
		{
		    Coordinate old(*this);//old初始化为this，保留之前的值
		    m_iX ++;
		    m_iY ++;//调用完此函数之后，外面接收到的值是之前的值
		    return old;
		}
		int main()//重载符号的应用
		{
		    Coordinate coor1(3,5);
		    ++coor1;//等价于coor1.operator++();
		    coor1++;//等价于coor1.operator++(0);//系统默认传入值0，只是为表达后置++
		    return 0;
		}	
	4.4 二元运算符重载
	4.5 二元运算符编码实现
	总结1：二元运算符就是对2个操作数进行运算，如+（加号），-（减号）等。
		//成员函数重载，以+（加号）为例
		class Coordinate
		{
		public:
		    Coordinate(int x, int y);//构造函数
		    Coordinate operator+(const Coordinate &coor);//+(加号)重载声明，注意传入的参数类型加const表示在函数实现时不希望改变传入参数的值
		private:
		    int m_iX;
		    int m_iY;
		};
		Coordinate Coordinate::operator+(const Coordinate &coor)//+重载实现
		{
		    Coordinate temp;
		    temp.m_iX = this->m_iX + coor.m_iX;
		    temp.m_iY = this->m_iY + coor.m_iY;
		    return temp;
		}
		int main()//重载符号的应用
		{
		    Coordinate coor1(3,5);
		    Coordinate coor2(2,4);
		    Coordinate coor3(0,0);
		    coor3 = coor1 + coor2;//等价于coor1.operator+(coor2);
		    return 0;
		}

		//友元函数重载，以+（加号）为例
		class Coordinate
		{
		    friend Coordinate operator+(const Coordinate &coor1，const Coordinate &coor2);//+(加号)重载声明，注意传入的参数类型加const表示在函数实现时不希望改变传入参数的值
		public:
		    Coordinate(int x, int y);//构造函数
		private:
		    int m_iX;
		    int m_iY;
		};
		Coordinate operator+(const Coordinate &coor1，const Coordinate &coor2)//符号重载实现，注意友元函数实现与成员函数的不同
		{
		    Coordinate temp;
		    temp.m_iX = coor1.m_iX + coor2.m_iX;
		    temp.m_iY = coor1.m_iY + coor2.m_iY;
		    return temp;
		}
		int main()//重载符号的应用
		{
		    Coordinate coor1(3,5);
		    Coordinate coor2(2,4);
		    Coordinate coor3(0,0);
		    coor3 = coor1 + coor2;//等价于operator+(coor1,coor2);
		    return 0;
		}
	总结2：输出运算符重载
		class Coordinate
		{
		    friend ostream &operator<<(ostream &out, const Coordinate &coor);//注意返回的类型是ostream 的引用
		public:
		    Coordinate(int x, int y);//构造函数
		private:
		    int m_iX;
		    int m_iY;
		};
		ostream &operator<<(ostream &out, const Coordinate &coor)
		{
		    out << coor.m_iX << "," << coor.m_iY;
		    return out;
		}
		int main()//重载符号的应用
		{
		    Coordinate coor1(3,5);
		    cout << coor;//operator<<(cout,coor);//注意这里cout是一个ostream类型的对象
		    return 0;
		}
	总结3：输出运算符可以采用成员函数重载吗？不可以！！！注意采用成员函数重载时，隐藏了一个this指针，即第1个对象是this指针，但输出运算符第一个对象不能使this指针。
	总结4：一定认清运算符重载的本质：函数重载！！！本质上都是在传入参数！！！
	总结5：索引运算符[]重载
		class Coordinate
		{
		public:
		    Coordinate(int x, int y);//构造函数
		    int operator[](int index);
		private:
		    int m_iX;
		    int m_iY;
		};
		int Coordinate::operator[](int index)
		{
		    if(0 == index)
		        return m_iX;
		    else if(1 == index)
		        return m_iY;
		    else//实际应该判断出错
		        return 0;
		}
		int main()//重载符号的应用
		{
		    Coordinate coor1(3,5);
		    cout << coor[0];//等价于coor.operator[](0);
		    cout << coor[1];//等价于coor.operator[](0);
		    return 0;
		}
	总结6：索引运算符重载只能用成员函数重载，不能用友元函数。因为索引运算符的第一个参数必须是this指针。



	第5章 模板函数与模板类
	5.1 函数模板
	5.2 函数模板代码实现
	总结1：为什么用模板？因为有些函数只有参数类型会变，功能不变，所以用模板。
	总结2：关键字templte指示模板;关键字tempname和class作用是一样的，指示一种类型
		template <class T>//也可以写成template <typename T>
		T max(T a,T b)//函数模板
		{
		    return (a>b)?a:b;
		}
		int ival = max(100,99);//模板函数
		char ival = max<char>('A','B');//模板函数，注意这里的使用方法，前面要用
	总结3：通过函数模板产生的函数叫模板函数。如果只有函数模板，计算机是不会占据空间的。只有在调用时才产生代码。
	总结4：template也可以传入变量：
		template <int size>
		void display
		{
		    cout << size << endl;
		}
		//使用方法
		display<10>();//打印出来是10
	总结5：多参数模板函数
		template <typename T, typename C>//也可写成template <class T, class C>,class和typename可混用
		void diaplay(T a, C b)
		{
		    cout << a << "," << b << endl;
		}
		//使用方法
		int a = 1024;
		string str = "hello world";
		display<int, string>(a,str);
	总结6：函数的模板与重载
		template <typename T>
		void display(T a);
		display<int>(10);//使用

		template <typename T>
		void display(T a, T b);
		display<int>(10，20);//使用
		
		template <typename T, int size>
		void display(T a);
		display<int， 5>(10);//使用

	5.3 类模板
	5.4 类模板代码实现
	总结1：类模板也是因为有时只有数据类型不同。如栈，队列等实现。
	总结2：类模板定义：
		template<class T>//注意在类前面用template声明
		class MyArray
		{
		public:
		    void display(){};//类内定义成员函数，直接定义
		private:
		    T *m_pArr;
		}
	总结3：类外实现成员函数方法：需要在每一个成员函数前都用template<class T>进行声明。
		template<class T>
		void MyArray<T>::diaplay()
		{
		    ...
		}
	总结4：类模板本身不会产生代码，只有实例化对象时才产生实际代码。
	总结5：模板类的使用：
		int main()
		{
		    MyArray<int> arr;//实例化对象时才产生实际代码，模板类
		    arr.display();
		}
	总结6：类模板中多个参数：
		template <typename T, int KSize>
		class Container
		{
		public:
		    void display();
		private:
		    T m_obj;
		};
		template <typename T, int KSize>//类外定义时，每个成员函数实现时，前面都要有声明
		void Container<T, KSize>::display()
		{
		    for(int i = 0;i < KSize; i++)
		        cout << m_obj << endl;
		}
		int main()
		{
		    Container<int, 10>ct1;//实例化对象时传入参数
		    ct1.display();
		}
	总结7：模板代码不能分离编译，即不能在.h文件中声明，在.c文件中定义。只能声明和定义放在一个文件中。


	第6章 标准模板类
	6.1 标准模板库
	总结1：向量的初始化方法：
		vector<T> v1;//vector保存类型为T的对象。默认构造函数v1为空。
		vector<T> v2(v1);//v2是v1的一个副本
		vector<T> v3(n, i);//v3包含n个值为i的元素
		vector<T> v4(n);//v4包含有值初始化元素的n个副本
	总结2：向量的常用函数：
		empty();//判断向量是否为空
		begin();//返回向量迭代器首元素
		end();  //返回向量迭代器末元素的下一个元素
		clear();//清空向量
		front();//第一个数据
		back(); //最后一个数据
		size(); //获取向量中数据大小
		push_back(elem);//将数据插入向量尾
		pop_back();//删除向量尾部数据
	总结3：向量使用示例：
		int main(void)
		{
		    vetor vec;
		    vec.push_back("hello");
		    vector<string>::iterator citer = vec.begin();//向量迭代器，citer数据类型是vector<string>::iterator，是一个指针
		    for(;citer != vec.end(); citer++)//遍历
		    {
		        cout << *citer << endl;
		    }
		}

	总结4：链表模板：
	总结5：映射模板：
		map<int, string> m;//映射对象
		pair<int, string> p1(10,"shanghai");//传入键值，键是10，值是shanghai
		pair<int, string> p1(20,"beijing");//传入键值，键是20，值是beijing
		m.insert(p1);//放入m映射中
		m.insert(p2);
		cout << m[10] << endl;//打印出值shanghai
		cout << m[20] << endl;//打印出值beijing

		map<int, string> m;//映射对象
		pair<int, string> p1(10,"shanghai");//传入键值，键是"S"，值是shanghai。键可以是字符串
		pair<int, string> p1(20,"beijing");//传入键值，键是"B"，值是beijing。键可以是字符串
		m.insert(p1);//放入m映射中
		m.insert(p2);
		cout << m["S"] << endl;//打印出值shanghai
		cout << m["B"] << endl;//打印出值beijing

