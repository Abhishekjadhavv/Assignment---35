// Write a C++ Program to find Sum of Array using function template.

#include <iostream>
using namespace std;
template <class T>

T sumOfArray(T x[], int size)
{
    T sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += x[i];
    }

    return sum;
}

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    float arr2[5] = {1.2, 2.3, 4.5, 65.4, 53.4};
    int size = 5;

    cout << "Sum of arr1 is " << sumOfArray<int>(arr1, size) << endl;
    cout << "Sum of arr2 is " << sumOfArray<float>(arr2, size) << endl;
    return 0;
}