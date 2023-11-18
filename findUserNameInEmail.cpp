#include<iostream>
using namespace std;
int main()
{
    string email="ashishmahto@gmail.com";
    int i=(int)email.find('@');
    string unname=email.substr(0,i);
    cout<<"User name: "<<unname; 
    return 0;
}  