#ifndef _COPY_H_
#define _COPY_H_

class Array
{
public:
	Array();//���캯��
	Array(int count);//���캯��
	Array(int count,int len);//���캯��
	Array(const Array &arr);//�������캯��
	~Array();//��������
	void SetCount(int count);
	void SetLen(int len);
	int GetCount(void);
	void PrintAddr(void);
	void PrintArr(void);
	Array& PrintInfo(void);//����ֵΪ��
private:
	int m_iCount;
	int *m_pArr;
	int len;
};


void TestCopy(void);
#endif