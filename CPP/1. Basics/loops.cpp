#include <iostream>
using namespace std;

int multble()
{
    int n;
    cout << "Enter the number whose table to be shown: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i)
    {
        cout << n << " * " << i << " = " << n * i << endl;
    }
}

int sumofn()
{
    int n;
    cout << "Enter the number upto which sum is to be calculated: ";
    cin >> n;

    int sum = 0;

    // using while loop
    //  while(n > 0){
    //      sum += n;
    //      n--;
    //  }

    // using for loop
    for (int i; i <= n; i++)
    {
        sum += i;
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
}

// factors of a number
int factofn()
{
    int n;
    cout << "Enter the number whose factors are to be calculated: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// perfect number? - sum of factors = number itself
int perfect()
{
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;

    int sum = 0;

    for (int i; i <= n; ++i)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (sum == n)
    {
        cout << "The number is perfect";
    }
    else
    {
        cout << "The number is not perfect";
    }
}

int primeNo()
{
    int n;
    cout << "Enter the number to be checked: ";
    cin >> n;

    int factors = 0;
    for (int i; i <= n; ++i)
    {
        if (n % i == 0)
        {
            factors += 1;
        }
    }

    if (factors == 2)
    {
        cout << "The number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }
}

int digitsofno()
{
    int n;
    cout << "Enter the number whose digits are to be calculated: ";
    cin >> n;

    while (n > 0)
    {
        cout << n % 10 << endl;
        n /= 10;
    }
}

// armstrong number? - sum of cubes of digits = number itself ex - 153 = 1^3 + 5^3 + 3^3

int armstongNo()
{
    int n, cn, sum = 0;
    cout << "Enter the number to be checked: ";
    cin >> n;

    int m = n;

    while (n > 0)
    {
        cn = (n % 10) * (n % 10) * (n % 10);
        sum += cn;
        n /= 10;
    }

    if (sum == m)
    {
        cout << "The number is armstrong" << endl;
    }
    else
    {
        cout << "The number is not armstrong" << endl;
    }
}

int reversofno()
{
    int n, r, rev = 0;
    cout << "Enter the number to be reversed: ";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        rev = rev * 10 + r;
    }

    cout << "The reversed number is: " << rev << endl;
}

// palindrome number? - number = reverse of number
int palindromeno()
{
    int n, r, rev = 0;
    cout << "Enter the number to be reversed: ";
    cin >> n;

    int m = n;

    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        rev = rev * 10 + r;
    }

    if (rev == m)
    {
        cout << "The number is palindrome" << endl;
    }
    else
    {
        cout << "The number is not palindrome" << endl;
    }
}

// digits in words - rev > then get digits > use switch case to print digits in words

int digitsinwords()
{
    int n, r, rev = 0;
    cout << "Enter the number to be reversed: ";
    cin >> n;

    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        rev = rev * 10 + r;
    }

    while (rev > 0)
    {
        r = rev % 10;
        rev /= 10;

        switch (r)
        {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
}

// GCD - greatest common divisor - largest number that divides both the numbers

int gcd()
{
    int n1, n2;
    cout << "Enter the two numbers whose GCD is to be calculated: ";
    cin >> n1 >> n2;

    int gcd = 1;

    for (int i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }

    cout << "The GCD of " << n1 << " and " << n2 << " is " << gcd << endl;
}

// LCM - least common multiple - smallest number that is divisible by both the numbers

int lcm()
{
    int n1, n2;
    cout << "Enter the two numbers whose LCM is to be calculated: ";
    cin >> n1 >> n2;

    int lcm = (n1 > n2) ? n1 : n2;

    while (true)
    {
        if (lcm % n1 == 0 && lcm % n2 == 0)
        {
            cout << "The LCM of " << n1 << " and " << n2 << " is " << lcm << endl;
            break;
        }
        lcm++;
    }
}

// fibonacci series - 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
int fibo()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (i == 1)
        {
            cout << t1 << " ";
            continue;
        }
        if (i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << " ";
    }
}

int main()
{
    // multble();
    // sumofn();
    // factofn();
    // perfect();
    // primeNo();
    // digitsofno();
    // armstongNo();
    // reversofno();
    // palindromeno();
    // digitsinwords();
    // gcd();
    // lcm();
    // fibo();
    return 0;
}
