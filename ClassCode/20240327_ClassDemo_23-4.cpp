//2024��3��28��17:57:45 ��Ҫ�������ʼ�

/*
Ch15: �̳� 

�̳У����������ഴ�����࣬�������Ϊ������࣬�����Ϊ����������ࡣ
����̳�֮��������˼̳�ӵ�л�������г�Ա��������Ա�����ͳ�Ա������֮�⣬ 
              ���������Ӷ����Լ��µĶ��еĳ�Ա��������Ա�����ͳ�Ա�������� 
*/


#include <iostream>
using namespace std;

#define PI 3.1415926

class Shape
{
public:
	Shape();
	~Shape();
	void setPerimeter(double p);
	void setArea(double a);
	double getPerimeter();
	double getArea();
	
private:
	double perimeter;
	double area;
};

class Circle : public Shape
{
public:
	Circle();
	~Circle();
	void setRadius(double r);
	double getRadius();
	
private:
	double radius;
};

class Square : public Shape
{
public:
	Square();
	~Square();
	void setLength(double len);
	double getLength();
	
private:
	double length;
};


int main()
{
	int a;
	cout << "sizeof(a) = " << sizeof(a) << " , &a = " << &a << " , a = " << a << endl;
	
	Shape s;
	cout << "sizeof(s) = " << sizeof(s) << " , &s = " << &s << endl;
	cout << "s.perimeter = " << s.getPerimeter() << " , s.area = " << s.getArea() << endl;
	s.setArea(12);
	s.setPerimeter(22);
	cout << "s.perimeter = " << s.getPerimeter() << " , s.area = " << s.getArea() << endl;
	
	cout << "-----------" << endl;
	
	Circle c;
	cout << "sizeof(c) = " << sizeof(c) << " , &c = " << &c << endl;
	cout << "c.perimeter = " << c.getPerimeter() << " , c.area = " << c.getArea() << endl;
	c.setArea(12);
	c.setPerimeter(22);
	cout << "c.perimeter = " << c.getPerimeter() << " , c.area = " << c.getArea() << endl;
	cout << "c.radius = " << c.getRadius() << endl;
	
	cout << "-----------" << endl;
	
	c.setRadius(3);
	cout << "c.radius = " << c.getRadius() << endl;
	cout << "c.perimeter = " << c.getPerimeter() << " , c.area = " << c.getArea() << endl;
	
	cout << "-----------" << endl;
	
	Square sq;
	cout << "sizeof(sq) = " << sizeof(sq) << " , &sq = " << &sq << endl;
	cout << "sq.perimeter = " << sq.getPerimeter() << " , sq.area = " << sq.getArea() << endl;
	sq.setArea(12);
	sq.setPerimeter(22);
	cout << "sq.perimeter = " << sq.getPerimeter() << " , sq.area = " << sq.getArea() << endl;
	
	cout << "-----------" << endl;
	
	sq.setLength(3);
	cout << "sq.radius = " << sq.getLength() << endl;
	cout << "sq.perimeter = " << sq.getPerimeter() << " , sq.area = " << sq.getArea() << endl;
	
	//s.setRadius(2);//error: ��������ܵ��������¼ӵĶ��еĳ�Ա 
	//sq.setRadius(2);//error: ��������ܵ�����������ĳ�Ա
	
	return 0;
} 


Shape::Shape()
{
	perimeter = area = 0;
}

Shape::~Shape()
{
}

void Shape::setPerimeter(double p)
{
	perimeter = p;
}

void Shape::setArea(double a)
{
	area = a; 
}

double Shape::getPerimeter()
{
	return perimeter;
}

double Shape::getArea()
{
	return area;
}

Circle::Circle()
{
	radius = 0;
}

Circle::~Circle()
{
}

void Circle::setRadius(double r)
{
	radius = r;
	setPerimeter( 2 * PI * radius );
	setArea(PI * radius * radius );//pow(radius, 2); //<math.h> or <cmath>
}
double Circle::getRadius()
{
	return radius;
}

Square::Square()
{
	length = 0;
}

Square::~Square()
{
}

void Square::setLength(double len)
{
	length = len;
	setPerimeter( 4 * length );
	setArea( length * length );
}

double Square::getLength()
{
	return length;
}

