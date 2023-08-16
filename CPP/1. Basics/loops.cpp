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

int main()
{
    multble();
    return 0;
}
