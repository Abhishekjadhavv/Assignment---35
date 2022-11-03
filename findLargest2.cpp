// Write a C++ program to find the largest of three elements using a template.

#include<iostream>
using namespace std;

template<class T>

T largest(T x, T y,T z){
  return x>y?x>z?x:z:y>z?y:z;
}

int main(){
    cout<<"Largest number is "<<largest<int>(45,78,54)<<endl;
    cout<<"Largest number is "<<largest<float>(45.54,23.45,54.56)<<endl;
    return 0;
}