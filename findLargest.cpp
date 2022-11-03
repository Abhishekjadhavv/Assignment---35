// 2. Write a C++ Program to find Largest among two numbers using function template.

#include<iostream>
using namespace std;

template<class T>

T largest(T x,T y){
  return x>y?x:y;
}

int main(){
    cout<<"Largest number is "<<largest<int>(89,78)<<endl;
    cout<<"Largest number is "<<largest<float>(56.45,56.46)<<endl;
    return 0;
}