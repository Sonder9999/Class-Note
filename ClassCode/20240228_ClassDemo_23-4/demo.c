#include <stdio.h>


void show(int a)
{
	printf("In show(int)\n");
}

/*error:C������û��/��֧�����غ��� 
void show(double a)
{
	printf("In show(double)\n");
}

void show(int a, double b)
{
	printf("In show(int,double)\n");
}

void show(double a, int b)
{
	printf("In show(double,int)\n");
}
*/

int main()
{
	show(1);
	//show(2.2);
	//show(1, 2.2);
	//show(1.1, 2);
	return 0;
}


//void add(int a = 0, int b = 0)//error:C�����к���û��Ĭ��ֵ����,��������Ĭ��ֵ 
void add(int a, int b)
{
	printf("In add(): a = %d , b = %d\n", a, b);
}

int main3()
{
	int x = 3, y = 4;
	add(1,2);
	add(x,y);
	//add(5);
	//add();
	return 0;
}

void test1(int a)//��ֵ����
{
} 

void test2(int *a)//��ָ��/��ַ����
{
} 

/*
void test3(int &a)//error:C�����к���û�����ô��� 
{
} 
*/

int main2()
{
	int b = 1;
	test1(b);//��ֵ����
	int *p = &b;
	test2(&b);//��ָ��/��ַ����
	test2(p);//��ָ��/��ַ����
	return 0;
}


int main1()
{
	int a = 12;
	printf("a = %d , &a = %d / 0x%x , sizeof(a) = %d bytes\n", a, &a, &a, sizeof(a));
	
	int b = 23;
	printf("b = %d , &b = %d / 0x%x , sizeof(b) = %d bytes\n", b, &b, &b, sizeof(b));
	
	//int &r = a;//error: C������û���������� 
	
	return 0;
}
