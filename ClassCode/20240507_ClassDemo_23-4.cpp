
/*
Ch13: �ļ�������� 

cin:  console input,  ����̨����/��׼����/��������
cout: console output, ����̨���/��׼���/��Ļ���
*/

#include <iostream> //input output stream, for cin, cout, ...
#include <fstream>  //file stream, for ifstream, ofstream
#include <string>   //for string class
using namespace std;

int main()
{
	//open the file
	char fileName[200] = "a.txt";
	
	ifstream fin;
	fin.open(fileName);
	
	if(fin.fail())
	//if(!fin)
	{
		cout << "Failed to open the file: " << fileName << endl;
		return 0;
	}
	
	//read/write the file
	
	/*���ַ���ȡ 
	char c;
	//while(fin >> c)//�������ָ���(�ո�/�Ʊ��/���з�) 
	while(fin.get(c))//�����ָ���(�ո�/�Ʊ��/���з�)
	{
		cout << c; 
	}
	*/
	
	/*���/���ʶ�ȡ
	//char str[200] = "";
	string str = "";
	while(fin >> str)
	{
		cout << str << endl;
	}
	*/
	
	/*���ж�ȡ
	char str[200] = "";
	while(fin.getline(str, 200))
	{
		cout << str << endl;
	}
	*/
	string str = "";
	while(getline(fin, str))
	{
		cout << str << endl;
	}
	
	
	//close the file
	fin.close();
	
	return 0;
}

int main3()
{
	//open the file 
	char fileName[200] = "a.txt";
	
	//ifstream fin;
	//fin.open(fileName);
	//fin.open(fileName, ios::in);
	
	ifstream fin(fileName);
	//ifstream fin(fileName, ios::in);
	
	//read/write the file
	
	//int a, b;
	//fin >> a >> b;
	
	//cout << "a = " << a << " , b = " << b << endl;
	
	int a, sum = 0;
	while( fin >> a )
	{
		sum += a;
		//cout << a << endl;
	}
	cout << "sum = " << sum << endl;
	
	//close the file
	fin.close();
	
	return 0;
}

int main2()
{
	/*
	cout << "e:\demo\a.txt" << endl;
	cout << "e:\\demo\\a.txt" << endl;
	cout << "e:/demo\\a.txt" << endl;
	cout << "e:\\demo/a.txt" << endl;
	cout << "e:/demo/a.txt" << endl;
	return 0;
	*/
	
	//open the file
	
	char fileName[200] = "a.txt";//���·�� 
	//char fileName[200] = "E:\\demo\\a.txt";//����·��
	//char fileName[200] = "E:/demo\\a.txt";//����·��
	//char fileName[200] = "E:\\demo/a.txt";//����·��
	//char fileName[200] = "E:/demo/a.txt";//����·�� 
	//char fileName[200] = "E:/demo/test/a.txt";//����·�� 
	
	ofstream fout;
	//fout.open(fileName);
	fout.open(fileName, ios::app);
	
	//if(fout.fail())
	if(!fout)
	{
		cout << "Failed to open the file: " << fileName << endl;
		return 0;
	}
	
	//ofstream fout;
	//fout.open("a.txt");//Ĭ���ǽض�/����д��ģʽ 
	//fout.open("a.txt", ios::out);//output,�ض�/����д��ģʽ
	//fout.open("a.txt", ios::trunc);//truncate,�ض�/����д��ģʽ
	//fout.open("a.txt", ios::app);//append,׷��/����д��ģʽ
	
	//ofstream fout("a.txt");
	//ofstream fout("a.txt", ios::app);
	
	//read/write the file
	fout << "Hello world!" << endl;
	
	//close the file
	fout.close();
	
	return 0;
}

int main1()
{
	int a;
	cin >> a;
	cout << "a = " << a << endl;
	return 0;
} 
