// Write a C++ program to demonstrate the addition of multiple types of data using
// generic functions or templates.

#include<iostream>
using namespace std;
template<class T>

T add(T x,T y){
  return (x+y);
}

int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;

    cout<<"Sum is "<<add<int>(a,b)<<endl;
    cout<<"Sum is "<<add<float>(5.4,45)<<endl;
    return 0;
}