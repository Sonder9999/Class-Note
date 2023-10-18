/* ����ע��
 * FileName: main.cpp
 * Function: Print a string to screen
 * Author:   yyh
 * E-mail:   feifanyyh@163.com
 * Date:     Oct 18th, 2023
 */

#include <iostream>
#include <climits>
#include <cfloat>


using namespace std;

int main()
{
    cout << "Hello world!HHHHHHHHHHHHHHHHHH\n" // ����ת���ַ�\n
         << "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHH\n"
         << "HHHHHHHHHHHHHHHHHHHHHHHHHHHHHH\n"
         // \t ��ʾ�Ʊ����һ��ռ8���ո�λ��
         << "HH\tHHHHHHHHHHHHHHHHHHHHHHHHHH" << endl;

    // DataType:�ڽ����ͺ��û���������
    // �ڽ����ͣ�bool,char,int,float,double,long, long long
    // �ڽ����Ϳ��������η���signed��unsigned
    // Ĭ�϶���signed����
    // �������� ������;
    bool bl1; // ����������
    bool bl2=true;// �����Ķ���
    cout << "bl1=" << bl1 << endl;
    cout << "bl2=" << bl2 << endl;
    cout << "Sizeof(bool)=" << sizeof(bool) << endl;
    cout << "Sizeof(bl1)=" << sizeof(bl1) << endl;

    char ch1;
    char ch2='a'; // ʵ����ch2��洢�����ַ�a��ASCII����ֵ
    cout << "ch1=" << ch1 << endl;
    ch1=101; // ��ASCII����ֵ��ֵ��ʵ��Ϊ�ַ�e
    cout << "ch1=" << ch1 << endl; // ����ַ�e
    cout << "ch1=" << (int)ch1 << endl;// ����ַ�e�ı���ֵ
    cout << "ch2=" << ch2 << endl;
    cout << "ch2=" << (int)ch2 << endl;
    cout << "A=" <<(char) (ch2-32) << endl;
    cout << "Sizeof(char)=" << sizeof(char) << endl;
    cout << "Sizeof(ch1)=" << sizeof(ch1) << endl;

    int a;
    int b=10;
    int c(100); // C++11��ĳ�ʼ����ʽ
    int d{1000};// C++11��ĳ�ʼ����ʽ
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;
    cout << "Sizeof(int)=" << sizeof(int) << endl;
    cout << "Sizeof(a)=" << sizeof(a) << endl;
    cout << "The biggest of int is: " << INT_MAX << endl;
    cout << "The smallest of int is: " << INT_MIN << endl;

    int sum=b+c+ch2;
    cout << "sum=" << sum << endl;

    // ���������������Ϊ����
    cout << "1/2=" << 1/2 << endl;
    cout << "3/2=" << 3/2 << endl;
    cout << "5/3=" << 5/3 << endl;
    cout << "4/2=" << 4/2 << endl;

    // % ȡģ���������࣬�������ֻ��������
    cout << "1%2=" << 1%2 << endl;
    cout << "3%2=" << 3%2 << endl;

    /*
     * ����12321��10101��34543������������������
     * 23523��12435�������������ǻ�����
     * �ٶ�����ľ���һ��5λ��������жϸ����Ƿ�Ϊ������
     */
    int number;
ret:
    cout << "Input a number(10000-99999):";
    cin >> number;
    if(number<10000 || number>99999)
        goto ret;
    if(number/10000==number%10 && (number%10000)/1000==(number%100)/10 )
        cout << number << " is a palindromic number" << endl;
    else
        cout << number << " is not a palindromic number" << endl;

    long l1;
    long l2=1000l;
    cout << "l1=" << l1 << endl;
    cout << "l2=" << l2 << endl;
    cout << "Sizeof(long)=" << sizeof(long) << endl;
    cout << "Sizeof(l2)=" << sizeof(l2) << endl;
    cout << "The biggest of long is: " << LONG_MAX << endl;
    cout << "The smallest of long is: " << LONG_MIN << endl;

    // �������ı�ʾ��ʽ�μ�IEEE 754
    float f1=1000;
    cout << "f1=" << f1 << endl;
    cout << "Sizeof(float)=" << sizeof(float) << endl;
    cout << "Sizeof(f1)=" << sizeof(f1) << endl;
    cout << "The biggest of float is: " << FLT_MAX << endl;
    cout << "The smallest of float is: " << FLT_MIN << endl;

    double d1=1000;
    cout << "d1=" << d1 << endl;
    cout << "Sizeof(double)=" << sizeof(double) << endl;
    cout << "Sizeof(d1)=" << sizeof(d1) << endl;
    cout << "The biggest of double is: " << DBL_MAX << endl;
    cout << "The smallest of double is: " << DBL_MIN << endl;

    long double ld1=1000;
    cout << "ld1=" << ld1 << endl;
    cout << "Sizeof(long double)=" << sizeof(long double) << endl;
    cout << "Sizeof(ld1)=" << sizeof(ld1) << endl;
    cout << "The biggest of long double is: " << LDBL_MAX << endl;
    cout << "The smallest of long double is: " << LDBL_MIN << endl;

    long long ll1=1000;
    cout << "ll1=" << ll1 << endl;
    cout << "Sizeof(long long)=" << sizeof(long long) << endl;
    cout << "Sizeof(ll1)=" << sizeof(ll1) << endl;
    cout << "The biggest of long long is: " << LLONG_MAX << endl;
    cout << "The smallest of long long is: " << LLONG_MIN << endl;

    // ����һ���������洢ȫ������˿ڣ�Ӧ����ζ���˱���
    // long long�����
    return 0;
}
