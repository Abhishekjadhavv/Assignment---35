// Write a C++ Program to Swap data using function template.
#include<iostream>
using namespace std;
template<class T>

void Swap(T *x,T *y){
  T temp;
  temp = *x;
  *x = *y;
  *y = temp;
}


int main(){
    int a,b;
    cout<<"Enter two number"<<endl;
    cin>>a>>b;
    Swap<int>(&a,&b);
    cout<<"a = "<<a<<" and "<< "b = "<<b<<endl;

    float a1,b1;
    cout<<"Enter two number"<<endl;
    cin>>a1>>b1;
    Swap<float>(&a1,&b1);
    cout<<"a1 = "<<a1<<" and "<< "b1 = "<<b1<<endl;

    return 0;
}

