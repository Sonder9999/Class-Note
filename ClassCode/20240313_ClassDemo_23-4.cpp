//2024��3��28��17:51:43 ��Ҫ�������ʼ�


/*
Ch10 & Ch12: ������: array, vector, string

array(��������): 
���ò���: ���帳ֵ, size(), swap(), fill(), ...

vector(�䳤����):
���ò���: ���帳ֵ, size(), push_back(), pop_back(), resize(), ...

string(�䳤�ַ�����/�ַ���): 
���ò���: ���帳ֵ, size()/length(), substr(), find(), ...
 
*/


#include <iostream>
#include <array>  //for array class
#include <vector> //for vector class
#include <string> //for string class
#include <iomanip> //for input output stream manipulation
using namespace std;

void showString(string &s)
{
	//cout << "The string has " << s.size() << " charactors: " << s << endl;
	cout << "The string has " << s.length() << " charactors: " << s << endl;
}

int main()
{
	string s1;//����һ���ַ���,Ĭ�ϳ���Ϊ0 
	showString(s1);
	
	string s2 = "abc";//����һ���ַ��������г�ʼ�� 
	showString(s2);
	
	s1 = s2;//OK: string�ַ�����������帳ֵ(���Ȳ������)
	showString(s1);
	
	cout << "-----------" << endl;
	
	s1 = "abcdefghijklmndddddefg";
	showString(s1);
	cout << s1.substr(3) << endl;//��ô��±�3��ʼһֱ�������Ӵ� 
	cout << s1.substr(3,4) << endl;//��ô��±�3��ʼ����Ϊ4���Ӵ�
	
	cout << "-----------" << endl;
	
	cout << s1.find('d') << endl;//��ô��������ַ�'d'��һ�γ��ֵ��±� 
	cout << s1.find("efg") << endl;//��ô��������ַ���"efg"��һ�γ��ֵ��±�
	cout << s1.find("123") << endl;
	cout << s1.npos << endl;//�ַ������Ҳ���Ŀ��ʱ���صı�ʶ���� 
	cout << (s1.find("abc") == s1.npos ? "Not Found" : "Found" ) << endl;
	cout << (s1.find("123") >= 0 && s1.find("123") < s1.size() ? "Found" : "Not Found" ) << endl;
	
    double pos = s1.find("123");
    cout << fixed;
	cout << pos << endl;
	
	
	return 0;
}


//void showVector(vector<int> a)
void showVector(vector<int> &a)
{
	int len = a.size();
	cout << "The vector has " << len << " elements: ";
	for(int i = 0 ; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main4()
{
	vector<int> v;//����һ����������,����Ĭ��Ϊ0 
	showVector(v);
	
	v.push_back(1);//β�����һ��ֵΪ1����Ԫ��, ���鳤�ȼ�1 
	showVector(v);
	
	v.push_back(3);
	showVector(v);
	
	v.push_back(5);
	showVector(v);
	
	cout << "-----------" << endl;
	
	v.pop_back();//β��ɾ�����һ��Ԫ��,���鳤�ȼ�1 
	showVector(v);
	
	v.pop_back();
	showVector(v);
	
	v.pop_back();
	showVector(v);
	
	cout << "-----------" << endl;
	
	v.resize(5,2);//��������Ϊ5,ɾ��β������Ԫ��,����β��������ɳ�ʼֵΪ2����Ԫ�� 
	showVector(v);
	
	v.resize(10,3);//��������Ϊ10,ɾ��β������Ԫ��,����β��������ɳ�ʼֵΪ3����Ԫ�� 
	showVector(v);
	
	v.resize(3,4);//��������Ϊ3,ɾ��β������Ԫ��,����β��������ɳ�ʼֵΪ4����Ԫ�� 
	showVector(v);
	
	return 0;
}

int main3()
{
	vector<int> a(3);//����һ������Ϊ3����������,����Ԫ�صĳ�ʼֵ����Ĭ��ֵ0 
	showVector(a);
	/*
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	cout << "The array is: ";
	for(int i = 0 ; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	*/
	
	cout << "--------" << endl;
	
	vector<int> b(6,1);//����һ������Ϊ6����������,����Ԫ�صĳ�ʼֵ����ָ��ֵ1
	showVector(b);
	
	cout << "--------" << endl;
	
	a = b;//OK: vector������������帳ֵ(���Ȳ������)
	showVector(a);
	showVector(b);	
	
	cout << "--------" << endl;
	
	int n = 3;
	cin >> n;
	//vector<int> c(n);//����һ������Ϊ����n����������,����Ԫ�صĳ�ʼֵ����Ĭ��ֵ0 
	vector<int> c(n,100);//����һ������Ϊ����n����������,����Ԫ�صĳ�ʼֵ����ָ��ֵ100 
	showVector(c);	
	
	return 0;
} 


void showArray(array<int,3> a)
{
	int len = a.size();
	cout << "The array is: ";
	for(int i = 0 ; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main2()
{
	array<int,3> a;//����һ������Ϊ3����������,����Ԫ�صĳ�ʼֵ�������ֵ
	showArray(a);
	/*
	//a[0] = 1;
	//a[1] = 2;
	//a[2] = 3;
	cout << "The array is: ";
	for(int i = 0 ; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	*/
	
	cout << "--------" << endl;
	
	a.fill(2); //�������(����Ԫ�ض�����ָ��ֵ2) 
	showArray(a);
	
	cout << "--------" << endl;
	
	array<int,3> b = {4,5,6};//����һ������Ϊ3����������,��ָ��ֵ������Ԫ�س�ʼ��
	showArray(b);
	
	cout << "--------" << endl;
	
	a.swap(b);//���黥��(���ȱ������) 
	showArray(a);
	showArray(b);	
	
	cout << "--------" << endl;
	
	b.swap(a);
	showArray(a);
	showArray(b);	
	
	cout << "--------" << endl;
	
	a = b;//OK: array������������帳ֵ(���ȱ������)
	showArray(a);
	showArray(b);	
	
	cout << "--------" << endl;
	
	int n = 3;
	//cin >> n;
	//array<int,n> c;//error:ʹ��array�����ඨ������ʱ,���Ȳ���Ϊ���� 
	//showArr(c, n);
	
	return 0;
} 

void showArr(int *a, int len)
//void showArr(int a[], int len)
{
	cout << "The array is: ";
	for(int i = 0 ; i < len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main1()
{
	int a[3];//����һ������Ϊ3����������,����Ԫ�صĳ�ʼֵ�������ֵ 
	//a[0] = 1;
	//a[1] = 2;
	//a[2] = 3;
	cout << "The array is: ";
	for(int i = 0 ; i < 3; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	cout << "--------" << endl;
	
	int b[3] = {4,5,6};//����һ������Ϊ3����������,��ָ��ֵ������Ԫ�س�ʼ�� 
	showArr(b, 3);
	
	cout << "--------" << endl;
	
	//a = b;//error:�������鲻�����帳ֵ
	
	int n;
	cin >> n;
	int c[n];//����һ������Ϊ����n����������,����Ԫ�صĳ�ʼֵ�������ֵ,������'="���г�ʼ�� 
	showArr(c, n);
	
	return 0;
} 
