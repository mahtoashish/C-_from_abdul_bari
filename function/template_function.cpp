// template function

#include<iostream>
using namespace std;
template <class T>
T add(T a, T b) 
{
    return a+b;
}
int main()
{

    int c=add(9,10);
    float d=add(4.5f,3.4f);
    cout<<c<<" "<<d;
    return 0;
}