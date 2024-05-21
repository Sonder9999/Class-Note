//2024��3��28��17:47:29 ��Ҫ�������ʼ�


/*
C++�ж�Cû�еĺ�������ļ������������ò�����Ĭ��ֵ���������غ���

1,���ã��Ƕ�һ�����б�����һ������(�ڶ�������),�����±��������÷����ڴ�
        �����õ����в����ȼ��ڶ�ԭʼ����ֱ�Ӳ���(��д����) 
        
2,�����Ĵ��η�ʽ
   C�к��������ִ��η�ʽ����ֵ����, ��ָ��/��ַ���� 
   C++�к��������ִ��η�ʽ����ֵ����, ��ָ��/��ַ����, �����ô��� 
   
3,Ĭ��ֵ�������ں�������ʱ�����Ը�ȫ���򲿷��β�����Ĭ��ֵ(ȱʡֵ)
   �ں�������ʱ������ж�Ӧʵ�Σ�����ʵ�ε��ã�������Ĭ��ֵ���� 
   
4,�������أ�������������ͬ��������
   ����β��б�ͬ(�βε����������͡�˳������һ�ͬ�����β����ͷ������Ͷ��޹�)���򹹳�����
   �ں�������ʱ������ʵ���б����β��б��н��в��Һ�ƥ�䣬��ȫƥ������� 
*/


#include <iostream>
using namespace std;

void show(int a)
{
	cout << "In show(int): a = " << a << endl;
}

void show(double a)
{
	cout << "In show(double): a = " << a << endl;
}

void show(int a, double b)
{
	cout << "In show(int,double): a = " << a << " , b = " << b << endl;
}

void show(double a, int b)
{
	cout << "In show(double,int): a = " << a << " , b = " << b << endl;
}

int main()
{
	show(1);
	show(2.2);
	show(1, 2.2);
	show(1.1, 2);
	return 0;
}

void add(int a = 0, int b = 0)
{
	cout << "In add(): a = " << a << " , b = " << b << endl;
}

int main3()
{
	int x = 3, y = 4;
	add(1,2);
	add(x,y);
	add(5);
	add();
	return 0;
}

void test1(int a)//��ֵ����
{
} 

void test2(int *a)//��ָ��/��ַ����
{
} 

void test3(int &a)//�����ô��ݣ����ò������ܳ�ʼ�� 
{
} 

int main2()
{
	int b = 1;
	test1(b);//��ֵ����
	int *p = &b;
	test2(&b);//��ָ��/��ַ����
	test2(p);//��ָ��/��ַ����
	test3(b);//�����ô���
	return 0;
}

int main1()
{
	int a = 12;
	cout << "a = " << a << " , &a = " << &a << " , sizeof(a) = " << sizeof(a) << " bytes" << endl;
	
	int b = 23;
	cout << "b = " << b << " , &b = " << &b << " , sizeof(b) = " << sizeof(b) << " bytes" << endl;
	
	int &r = a;//����һ������r(reference),�Ǳ���a�ı���,�����±��������÷����ڴ� 
	cout << "r = " << r << " , &r = " << &r << " , sizeof(r) = " << sizeof(r) << " bytes" << endl;
	
	//int &r2;//error:��������ʱ�����ʼ��������ָ������һ�����б��������� 
	return 0;
}


