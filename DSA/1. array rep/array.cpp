#include <iostream>
using namespace std;

int main()
{
    // declaretion of arrays
    int a[5];                   // array of 5 garbage value
    int a[5] = {2, 4};          // array of 5 values {2,4,0,0,0}
    int a[5] = {0};             // array of 5 values {0,0,0,0,0}
    int a[] = {2, 4, 5, 6, 7};  // array of 5 values {2,4,5,6,7}
    int a[5] = {2, 4, 5, 6, 7}; // array of 5 values {2,4,5,6,7}

    cout << a[5] << endl;     // garbage value
    cout << a[2] << endl;     // 5
    cout << 2 [a] << endl;    // 5 - explain? - a is the pointer to first elemnt of array and 2[a] is same as a[2]
    cout << *(a + 2) << endl; // 5 - explain? - a is the pointer to first elemnt of array and a+2 is the pointer to 3rd element of array and * is used to get the value at that pointer - dereferencing
    cout << *(2 + a) << endl; // 5

    // input in array
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    // output in array
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    // static vs dynamic array
    int a[5]; // static array - size is fixed

    // dynamic array - size is not fixed
    int *p;
    p = new int[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    // increasing the size of array
    int *q;
    q = new int[10];

    // get number of elemts in array p
    int n = sizeof(p) / sizeof(int);

    for (int i = 0; i < n; i++) // copy all the elements of p to q
    {
        q[i] = p[i];
    }

    p = q; // p is now pointing to q
    // delete[] q; // delete the dynamic array but still taking memory
    q = nullptr; // q is now pointing to null
    delete[] q;  // delete the dynamic array

    // 2d array
    int a[3][4];                                                 // 3 rows and 4 columns
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}; // 3 rows and 4 columns
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};       // 3 rows and 4 columns
    int a[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};        // 3 rows and 4 columns

    // input in 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    // output in 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    // dynamic 2d array
    int **p;          // pointer to pointer? why? - 2d array is array of arrays
    p = new int *[3]; // 3 rows

    for (int i = 0; i < 3; i++)
    {
        p[i] = new int[4]; // 4 columns
    }

    // input in 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> p[i][j];
        }
    }

    // output in 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    // delete 2d array
    for (int i = 0; i < 3; i++)
    {
        delete[] p[i];
    }
}