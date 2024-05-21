
/*
Ch13+4: ����ʽ����
ͷ�ļ�: <iomanip>
���ø�ʽ���Ʒ�: fixed, setprecision(), left, right, setfill(), setw(), ...
һ������Ч: setw(), �����Ժ���ĵ�һ��������Ч
�������ǳ�������Ч: һ������, ������Ч, һֱ���´θ���ͬ���͸�ʽΪֹ. 
*/

#include <iostream>
#include <iomanip>  //input output manipulation/manipulator
#include <fstream>
using namespace std;


int main2()
{
	char fileName[200] = "a.txt";
	
	ofstream fout;
	fout.open(fileName);
	
	if(fout.fail())
	{
		cout << "Failed to open the file: " << fileName << endl;
		return 0;
	}
	
	double pi = 3.1415926;
	fout << pi << endl;
	fout << setprecision(4);
	fout << pi << endl;
	fout << fixed;
	fout << pi << endl;
	
	fout << "-----------------line1-----------" << endl;
	
	int a = 123;
	fout << a << endl;
	//fout << oct;
	fout << a << endl;
	//fout << hex;
	fout << a << endl;
	
	fout << "-----------------line2-----------" << endl;
	
	fout << "12345678901234567890" << endl;
	
	fout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	fout << left;
	fout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	fout << right;
	fout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	fout << setfill('*');
	fout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	fout << setfill(' ');
	fout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	fout << "-----------------line3-----------" << endl;
	
	for(int i = 1; i <= 200; i++)
	{
		fout << i << " ";
		if(i % 10 == 0)
		{
			fout << endl;
		}
	}
	
	fout << "-----------------line4-----------" << endl;
	
	for(int i = 1; i <= 200; i++)
	{
		fout << setw(4) << i << ( i % 10 == 0 ? "\n" : "" );
	}
	
	fout << "-----------------line5-----------" << endl;
	
	fout << setfill('0');
	for(int i = 1; i <= 200; i++)
	{
		fout << " " << setw(3) << i << ( i % 10 == 0 ? "\n" : "" );
	}
	
	fout.close();
	
	return 0;
}

int main()
{
	double pi = 3.1415926;
	cout << pi << endl;
	cout << setprecision(4);
	cout << pi << endl;
	cout << fixed;
	cout << pi << endl;
	
	cout << "-----------------line1-----------" << endl;
	
	int a = 123;
	cout << a << endl;
	//cout << oct;
	cout << a << endl;
	//cout << hex;
	cout << a << endl;
	
	cout << "-----------------line2-----------" << endl;
	
	cout << "12345678901234567890" << endl;
	
	cout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	cout << left;
	cout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	cout << right;
	cout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	cout << setfill('*');
	cout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	cout << setfill(' ');
	cout << setw(5) << "aaa" << setw(5) << "bbb" << setw(5) << "ccc" << endl;
	
	cout << "-----------------line3-----------" << endl;
	
	for(int i = 1; i <= 200; i++)
	{
		cout << i << " ";
		if(i % 10 == 0)
		{
			cout << endl;
		}
	}
	
	cout << "-----------------line4-----------" << endl;
	
	for(int i = 1; i <= 200; i++)
	{
		cout << setw(4) << i << ( i % 10 == 0 ? "\n" : "" );
	}
	
	cout << "-----------------line5-----------" << endl;
	
	cout << setfill('0');
	for(int i = 1; i <= 200; i++)
	{
		cout << " " << setw(3) << i << ( i % 10 == 0 ? "\n" : "" );
	}
	
	return 0;
}
