/*
Ch15: ��̬ 

�ھ��м̳й�ϵ�Ķ�������
ͨ���������ָ������������ã�
������ͬһ��ͬ���麯����
�������ָ��������õĲ�ͬ��������ͣ�
���Զ����ò�ͬ�����ͬ���麯����
�õ���ͬ��ִ�н���� 
���ֳ���ͬ����̬��״̬�����Ϊ��̬��

�������أ��������ﶨ��ĺͻ���������Ա����ͬ���ĳ�Ա��������Ѵӻ�����̳й�����ͬ����Ա�������ص�
�������ǣ��������ﶨ��ĺͻ������virtual�麯��ͬ���ĳ�Ա��������Ѵӻ�����̳й�����ͬ����Ա�������ǵ�

ʵ�ֶ�̬������������
1���ڻ�������virtual����Ϊ�麯��������������麯�������ض���(����д�麯����ʵ�ֹ���);
2��ͨ���������ָ��������������������麯���� 
*/

#include <iostream>
using namespace std;

class Shape
{
public:
	virtual void show()
	{
		cout << "I'm a shape." << endl;
	}
};

class Circle : public Shape
{
public:
	void show()
	{
		cout << "I'm a circle." << endl;
	}
};

class Square : public Shape
{
public:
	void show()
	{
		cout << "I'm a square." << endl;
	}
};

void showShape(Shape *p)
{
	p->show();//(*p).show();
}

void showShape2(Shape &r)
{
	r.show();
}

int main()
{
	cout << "------------------BEGIN---------" << endl;
	
	Shape shape; 
	shape.show();
	
	Circle circle;
	circle.show();
	
	Square square;
	square.show();
	
	cout << "------------------line1---------" << endl;
	
	Shape *pShape;
	pShape = &shape;
	pShape->show();//�ȼ��ڣ�(*pShape).show();
	
	Circle *pCircle;
	pCircle = &circle;
	pCircle->show();	
	
	Square *pSquare = NULL;
	pSquare = &square;
	pSquare->show();
	
	cout << "------------------line2---------" << endl;
	
	pShape = &shape;
	pShape->show();	
	
	pShape = &circle;
	pShape->show();
	
	pShape = &square;
	pShape->show();
	
	//pCircle = &shape;//error
	//pSquare = &shape;//error
	
	//pCircle = &square;//error
	//pSquare = &circle;//error
	
	cout << "------------------line3---------" << endl;
	
	pShape = &shape;
	showShape(pShape);	
	
	pShape = &circle;
	showShape(pShape);
	
	pShape = &square;
	showShape(pShape);
	
	cout << "------------------line4---------" << endl;
	
	showShape(&shape);
	showShape(&circle);
	showShape(&square);
	
	cout << "------------------line5---------" << endl;
	
	showShape2(shape);
	showShape2(circle);
	showShape2(square);
	
	cout << "------------------END-----------" << endl;
	
	return 0;
} 
