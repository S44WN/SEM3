#include <iostream>
using namespace std;

int arraydef()
{
    int arr[5];                    // size 5, cant have more than 5 elements
    int arr2[5] = {1, 2, 3, 4, 5}; // size 5, can have less than 5 elements - rest will be 0
    int arr3[5] = {1, 2};          // size 5, can have less than 5 elements - rest will be 0
    int arr4[] = {1, 2, 3, 4, 5};  // size 5, can have less than 5 elements - rest will be 0
    // arr[5] = {1,2,3,4,5}; //error - cant assign values to an already declared array

    float farr[5] = {1.1, 2.2, 3.3, 4.4, 5.5}; // float array
    char carr[5] = {'a', 'b', 'c', 'd', 'e'};  // char array
    char carr2[5] = "abcde";                   // char array - same as above

    // accessing arrays
    cout << arr[0] << endl; // 0th element
    cout << arr[1] << endl; // 1st element
    cout << arr[2] << endl; // 2nd element
}

int withforeachloop()
{
    int arr[5] = {1, 2, 3, 4, 5};
    float farr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    for (int i : arr)
    {
        cout << i + 1 << endl; // prints 2,3,4,5,6 but doesnt change the array
    }

    for (int &i : arr)
    {
        i++; // changes the array
    }

    for (auto i : arr)
    {
        cout << i << endl;
    }
}

int main()
{

    return 0;
}