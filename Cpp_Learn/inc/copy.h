#ifndef _COPY_H_
#define _COPY_H_

class Array
{
public:
	Array();//构造函数
	Array(int count);//构造函数
	Array(int count,int len);//构造函数
	Array(const Array &arr);//拷贝构造函数
	~Array();//析构函数
	void SetCount(int count);
	void SetLen(int len);
	int GetCount(void);
	void PrintAddr(void);
	void PrintArr(void);
	Array& PrintInfo(void);//返回值为类
private:
	int m_iCount;
	int *m_pArr;
	int len;
};


void TestCopy(void);
#endif