//2024��3��28��17:51:21 ��Ҫ�������ʼ�


#include <iostream>
using namespace std;

/*
Ch9: ��Ͷ���

������class���͵ı���.

��C++�У���class�ͽṹstruct������ȫ��ͬ����֮ͬ����Ҫ��������
1, ��Ա��Ĭ�Ϸ���Ȩ�ޣ�	struct��public, class��private.
2, Ĭ�ϵļ̳з�ʽ: 		struct��public, class��private.

����֮�⣬��������ͬ����Ա������('.','->'),�ṹ����/��������,�ṹָ��/����ָ��,�����еĽṹ����/�������.

��Ա(����/����)�����ַ���Ȩ��: public, protected, private.
public(����): 		�������ⶼ�ɷ���.
protected(����): 	���ڿɷ���,���ⲻ�ɷ���.
private(˽��): 		���ڿɷ���,���ⲻ�ɷ���.

��������ĳ�Ա����: ���캯������������
���캯��: �������ʱ�Զ�����, ���ڳ�Ա��ʼ��, �޷�������, ��������"����", ������, �в��޲ξ���. 
��������: �ͷŶ���ʱ�Զ�����, �����ͷų�Ա, �޷�������, ��������"~����", Ψһ, �޲�. 

�ж������ʱ, ���������ĵ���˳��͹��캯���෴, ������, ��������. 
*/

//struct Point//�ṹ���� 
class Point//������
{
public: //���г�Ա��(�����ֱ�ӷ���) 

	Point()//�޲ι��캯��,�������ʱ�Զ�����,���ڳ�Ա��ʼ�� 
	{
		x = 0;
		y = 0;
		cout << "Construction: x = " << x << " , y = " << y << endl;
	}
	Point(int a, int b)//�вι��캯��,���ڳ�Ա��ʼ�� 
	{
		x = a;
		y = b;
		cout << "Construction: x = " << x << " , y = " << y << endl;
	}
	
	~Point()//��������,�ͷŶ���ʱ�Զ�����,�����ͷų�Ա 
	{
		cout << "Destruction: x = " << x << " , y = " << y << endl;
	}
	
	void show()
	{
		cout << "The point is (" << x << "," << y << ")." << endl;
	}
	void setX(int a)
	{
		x = a;
	}
	void setY(int a)
	{
		y = a;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	
private: //˽�г�Ա��(���ⲻ��ֱ�ӷ���) 
    int x;
	int y;	
};

int main()
{	
	Point p1;
	cout << "Step1" << endl;
	Point p2(1,2);
	cout << "Step2" << endl;
	return 0;
}

int main1()
{
	/*
	//struct Point p;//�ṹ����(�ṹ���͵ı���) 	
	Point p;
	p.x = 1;
	p.y = 2;
	cout << "The point is (" << p.x << "," << p.y << ")." << endl;
	p.show();
	*/
	
	Point p;//����(�����͵ı���) 
	p.show();
	
	cout << "--------------" << endl;
	
	p.setX(1);
	p.setY(2);
	cout << "The point is (" << p.getX() << "," << p.getY() << ")." << endl;
	p.show();		
	
	return 0;
}
