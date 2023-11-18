#include <iostream>
#include<string>
using namespace std;
string upperToLower(string str)
{
    
    for(int i=0;str[i]!='\0';i++)
    {
        if('A'<=str[i] && str[i]<='Z')
        str[i]=str[i]+32;
    }
    return str;
}

int main()
{

    string s=upperToLower("WELCOmE");
    cout<<s;


return 0;
}