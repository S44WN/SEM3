// example of all datatypes in C++

/*
char - 1 byte
signed char - 1 byte
unsigned char - 1 byte

int - 4 bytes
signed int - 4 bytes
unsigned int - 4 bytes

short int - 2 bytes
signed short int - 2 bytes
unsigned short int - 2 bytes

long int - 4 bytes
signed long int - 4 bytes
unsigned long int - 4 bytes
long long int - 8 bytes
signed long long int - 8 bytes
unsigned long long int - 8 bytes

float - 4 bytes

double - 8 bytes
long double - 12 bytes

wchar_t - 2 or 4 bytes

bool - 1 byte

void - 0 byte

*/

#include <iostream>
using namespace std;

int datatypes()
{
    char a = 'A';
    signed char b = 'B';
    unsigned char c = 'C';

    int d = 10;
    signed int e = 20;
    unsigned int f = 30;

    short int g = 40;
    signed short int h = 50;
    unsigned short int i = 60;

    long int j = 70;
    signed long int k = 80;
    unsigned long int l = 90;
    long long int m = 100;
    signed long long int n = 110;
    unsigned long long int o = 120;

    float p = 3.14;

    double q = 3.1415;
    long double r = 3.141592;

    wchar_t s = L'A';

    bool t = true;

    cout << "char: " << a << endl;
    cout << "signed char: " << b << endl;
    cout << "unsigned char: " << c << endl;

    cout << "int: " << d << endl;
    cout << "signed int: " << e << endl;
    cout << "unsigned int: " << f << endl;

    cout << "short int: " << g << endl;
    cout << "signed short int: " << h << endl;
    cout << "unsigned short int: " << i << endl;

    cout << "long int: " << j << endl;
    cout << "signed long int: " << k << endl;
    cout << "unsigned long int: " << l << endl;
    cout << "long long int: " << m << endl;
    cout << "signed long long int: " << n << endl;
    cout << "unsigned long long int: " << o << endl;

    cout << "float: " << p << endl;

    cout << "double: " << q << endl;
    cout << "long double: " << r << endl;

    cout << "wchar_t: " << s << endl;

    cout << "bool: " << t << endl;

    return 0;
}

int datatypesValue()
{
    cout << "char: " << sizeof(char) << endl;
    cout << "signed char: " << sizeof(signed char) << endl;
    cout << "unsigned char: " << sizeof(unsigned char) << endl;

    cout << "int: " << sizeof(int) << endl;
    cout << "signed int: " << sizeof(signed int) << endl;
    cout << "unsigned int: " << sizeof(unsigned int) << endl;

    cout << "short int: " << sizeof(short int) << endl;
    cout << "signed short int: " << sizeof(signed short int) << endl;
    cout << "unsigned short int: " << sizeof(unsigned short int) << endl;

    cout << "long int: " << sizeof(long int) << endl;
    cout << "signed long int: " << sizeof(signed long int) << endl;
    cout << "unsigned long int: " << sizeof(unsigned long int) << endl;

    cout << "long long int: " << sizeof(long long int) << endl;

    cout << "signed long long int: " << sizeof(signed long long int) << endl;
    cout << "unsigned long long int: " << sizeof(unsigned long long int) << endl;

    cout << "float: " << sizeof(float) << endl;

    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    cout << "wchar_t: " << sizeof(wchar_t) << endl;

    cout << "bool: " << sizeof(bool) << endl;

    return 0;
}

int main()
{
    datatypes();
    datatypesValue();
    return 0;
}