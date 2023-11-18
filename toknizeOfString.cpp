#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[20] = "x=10;y=20;x=30";
    char *token = strtok(str, ";");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, ";");
    }
    return 0;
}