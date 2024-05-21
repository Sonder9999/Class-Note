//2024��3��28��17:57:10 ��Ҫ�������ʼ�

/*
Ch9 & Ch10: ����������, ��̬��Ա 
*/

#include <iostream>
#include <string> // for string class
using namespace std;

class Cat
{
public:
	string name;
	int weight;
	
	static int count;//��̬��Ա����(��������) 
	static int totalWeight;//��̬��Ա����(��������)
	
	static void showTotal();//��̬��Ա����(��������)
	
	Cat()//�޲ι��캯�� 
	{
		name = "NONAME";
		weight = 1;
		
		count++;
		totalWeight += weight;
		cout << "The cat " << name << " is created. weight = " << weight << endl;
	}
	
	Cat(string catName, int catWeight)//�вι��캯�� 
	{
		name = catName;
		weight = catWeight;
		
		count++;
		totalWeight += weight;
		cout << "The cat " << name << " is created. weight = " << weight << endl;
	}
	
	~Cat()//�������� 
	{
		count--;
		totalWeight -= weight;
		cout << "The cat " << name << " is released." << endl;
	}
};

int Cat::count = 0;//��̬��Ա����(���ⶨ��) 
int Cat::totalWeight = 0;//��̬��Ա����(���ⶨ��)

void Cat::showTotal()//��̬��Ա����(���ⶨ��)
{
	cout << "Cats: count = " << count << " , totalWeight = " << totalWeight << endl;
}

int main()
{
	Cat c1;
	Cat::showTotal();
	
	cout << "---------------" << endl;
	
	Cat c2("Tom", 3);
	Cat::showTotal();
	
	cout << "---------------" << endl;
	
	Cat catList[3];
	Cat::showTotal();
	
	cout << "---------------" << endl;
	
	Cat *pCat = new Cat("Jerry", 5);
	Cat::showTotal();
	
	delete pCat;
	Cat::showTotal();
	
	cout << "---------------" << endl;
	
	pCat = new Cat[4];
	Cat::showTotal();
	
	delete[] pCat;
	Cat::showTotal();
	
	cout << "-----END------" << endl;
	return 0;
}

class Demo
{
public:
	
	void test2()
	{
		a = 2;
	}
	
	int a;//��Ա����a������: ����Demo������� 
	
	static int b;//��̬��Ա����(��������) //��̬��Ա����b������: ����Demo�������
	
	static void show()//��̬��Ա����(���ڶ���),ֻ�ܷ��ʾ�̬��Ա(����/����)
	{
		cout << "b = " << b << endl;
	}
	
	void test1()
	{
		a = 1;
	}
	
	void test3();
};

int Demo::b = 0;//��̬��Ա����(���ⶨ��)

void Demo::test3()
{
	a = 2;
}

int main2()
{
	Demo d1;
	d1.a = 1;
	d1.test1();
	cout << sizeof(d1) << endl;
	
	Demo d2;
	d2.a = 2;
	d2.test1();
	cout << sizeof(d2) << endl;
	
	cout << "d1.a = " << d1.a << " , d2.a = " << d2.a << endl;
	
	cout << "-----------" << endl;
	
	cout << "d1.b = " << d1.b << " , d2.b = " << d2.b << endl;
	
	d1.b = 2;
	cout << "d1.b = " << d1.b << " , d2.b = " << d2.b << endl;
	
	d2.b = 3;
	cout << "d1.b = " << d1.b << " , d2.b = " << d2.b << endl;
	
	cout << "-----------" << endl;
	
	cout << "&d1 = " << &d1 << " , &d2 = " << &d2 << endl;
	cout << "&(d1.a) = " << &(d1.a) << " , &(d2.a) = " << &(d2.a) << endl;
	cout << "&(d1.b) = " << &(d1.b) << " , &(d2.b) = " << &(d2.b) << endl;
	
	cout << "-----------" << endl;
	
	d1.b = 4;
	cout << d1.b << " , " << d2.b << " , " << Demo::b << endl;
	
	d2.b = 5;
	cout << d1.b << " , " << d2.b << " , " << Demo::b << endl;
	
	Demo::b = 6;
	cout << d1.b << " , " << d2.b << " , " << Demo::b << endl;
	
	cout << "-----------" << endl;
	
	d1.show();
	d2.show();
	Demo::show();
	
	return 0;
}

int c = 0;//ȫ�ֱ���c������: �Ӷ���λ�õ���ǰ�ļ�β������(Line 174-204) 

void test1(int x)//�ֲ�����x������: �Ӷ���λ�õ���ǰ����β������(Line 176-182) 
{
	x = 2;
	int y; y = 2;//�ֲ�����y������: �Ӷ���λ�õ���ǰ����β������(Line 179-182)
	y = 3;
	c = 1;
}

void test2();

int main1()
{
	c = 2;
	int a;//�ֲ�����a������: �Ӷ���λ�õ���ǰ����β������(Line 189-198)
	a = 1;
	for(int i = 0 ; i < 2; i++)//�ֲ�����i������: �Ӷ���λ�õ���ǰ����β������(Line 191-194)
	{
		cout << i << endl;
	}
	test1(1);
	test2();
	return 0;
}

void test2()
{
	c = 3;
}

