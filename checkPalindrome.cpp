#include <iostream>
using namespace std;

int main()
{
    string str = "madam";
    int n = str.size();
    string rev = "";
    rev.resize(n);
    for (int j = 0, i = n - 1; j < n; j++, i--)
    {
        rev[j] = str[i];
    }
    cout << rev << endl;
    rev[n] = '\0';
    if (str.compare(rev) == 0)
        cout << "palindrome" << endl;
    else
    {
        cout << "not palindrom" << endl;
    }

    return 0;
}