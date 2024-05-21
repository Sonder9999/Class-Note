//2024年3月28日17:51:21 需要整理做笔记


#include <iostream>
using namespace std;

/*
Ch9: 类和对象

对象：类class类型的变量.

在C++中，类class和结构struct几乎完全相同，不同之处主要有两个：
1, 成员的默认访问权限：	struct是public, class是private.
2, 默认的继承方式: 		struct是public, class是private.

除此之外，其他都相同：成员操作符('.','->'),结构数组/对象数组,结构指针/对象指针,函数中的结构参数/对象参数.

成员(变量/函数)的三种访问权限: public, protected, private.
public(公有): 		类内类外都可访问.
protected(保护): 	类内可访问,类外不可访问.
private(私有): 		类内可访问,类外不可访问.

两种特殊的成员函数: 构造函数和析构函数
构造函数: 定义对象时自动调用, 用于成员初始化, 无返回类型, 函数名是"类名", 可重载, 有参无参均可. 
析构函数: 释放对象时自动调用, 用于释放成员, 无返回类型, 函数名是"~类名", 唯一, 无参. 

有多个对象时, 析构函数的调用顺序和构造函数相反, 正序构造, 逆序析构. 
*/

//struct Point//结构类型 
class Point//类类型
{
public: //公有成员区(类外可直接访问) 

	Point()//无参构造函数,定义对象时自动调用,用于成员初始化 
	{
		x = 0;
		y = 0;
		cout << "Construction: x = " << x << " , y = " << y << endl;
	}
	Point(int a, int b)//有参构造函数,用于成员初始化 
	{
		x = a;
		y = b;
		cout << "Construction: x = " << x << " , y = " << y << endl;
	}
	
	~Point()//析构函数,释放对象时自动调用,用于释放成员 
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
	
private: //私有成员区(类外不可直接访问) 
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
	//struct Point p;//结构变量(结构类型的变量) 	
	Point p;
	p.x = 1;
	p.y = 2;
	cout << "The point is (" << p.x << "," << p.y << ")." << endl;
	p.show();
	*/
	
	Point p;//对象(类类型的变量) 
	p.show();
	
	cout << "--------------" << endl;
	
	p.setX(1);
	p.setY(2);
	cout << "The point is (" << p.getX() << "," << p.getY() << ")." << endl;
	p.show();		
	
	return 0;
}
