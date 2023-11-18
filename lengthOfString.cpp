#include <iostream>
#include <string>
using namespace std;
int lenthOfString(string str)
{
    string::iterator it;
    int count = 0;
    int n = str.length();
    // for (int i = 0; str[i]!='\0'; i++)
    // {
    //     count++;
    // }

    for (it=str.begin();it!=str.end();it++)
    {
        count++;
    }
    return count;
}
int main()
{
    int len = lenthOfString("WELCOME");
    cout << len;
    return 0;
}