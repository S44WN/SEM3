// if - else?
// if - else if - else?
// switch - case?

#include <iostream>
using namespace std;

int ifelseswitch()
{
    int a = 10;
    int b = 20;
    int c = 30;

    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "a is not greater than b" << endl;
    }

    if (a > b)
    {
        cout << "a is greater than b" << endl;
    }
    else if (a > c)
    {
        cout << "a is greater than c" << endl;
    }
    else
    {
        cout << "a is not greater than b or c" << endl;
    }

    int choice = 2;
    switch (choice)
    {
    case 1:
        cout << "You chose 1" << endl;
        break;
    case 2:
        cout << "You chose 2" << endl;
        break;
    case 3:
        cout << "You chose 3" << endl;
        break;
    default:
        cout << "You chose something else" << endl;
    }

    return 0;
}

int youngorNot()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 12 && age <= 35)
    {
        cout << "You're " << age << ", you're young!" << endl;
    }
    else
    {
        cout << "You're not young!" << endl;
    }
}

int maxof3nos()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << a << " is the greatest";
    }
    else
    {
        if (b > c)
        {
            cout << b << " is the greatest";
        }
        else
        {
            cout << c << " is the greatest";
        }
    }
}

int quadraticroots()
{
    float a, b, c, d, r1, r2;
    cout << "Enter the coefficients of the quadratic equation: ";
    cin >> a >> b >> c;

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        cout << "The roots are real and distinct: " << r1 << " and " << r2 << endl;
    }
    else
    {
        if (d == 0)
        {
            r1 = -b / (2 * a);
            cout << "The roots are real and equal: " << r1 << endl;
        }
        else
        {
            cout << "The roots are imaginary" << endl;
        }
    }
}

int main()
{
    // youngorNot();
    maxof3nos();
    // ifelseswitch();
    return 0;
}
