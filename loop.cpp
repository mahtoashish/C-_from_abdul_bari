#include <iostream>
using namespace std;
void factorofnumber()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void factorial()
{
    int n;
    int fact = 1;
    cout << "Enter n:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    cout << fact;
}

void sumoffactors()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << endl;
    cout << sum;
    cout << endl;
}
void perfectnumber()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    int product = 2 * n;
    cout << endl;
    cout << product;
    cout << endl;
    cout << sum;
    cout << endl;
    if (sum == product)
    {
        cout << "Its a perfect number.";
    }
    else
    {
        cout << "Not a perfect number. ";
    }
}

void digitofnumber()
{
    int n, r;
    cout << "Enter n";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        cout << r << endl;
        n = n / 10;
    }
}

void armstrongnumber()
{
    int n, r;
    int sum = 0;
    cout << "Enter n: ";
    cin >> n;
    int m = n;
    while (n > 0)
    {
        r = n % 10;
        // cout<<r<<endl;
        n = n / 10;
        sum = sum + (r * r * r);
    }
    if (m == sum)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
}

void reversenumber()
{
    int n, r;
    int rev = 0;
    cout << "Enter n";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    cout << rev;
}

void plaindrome()
{
    int n, r;
    int rev = 0;
    cout << "Enter n: ";
    cin >> n;
    int m = n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    if (m == rev)
    {
        cout << "It is a palindrome number.";
    }
    else
    {
        cout << "Not Palindromic Number";
    }
}

void numberinwords()
{
    int n, r;
    int rev = 0;
    cout << "Enter n";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }
    // cout << rev << " " << n;
    while (rev > 0)
    {
        int p = rev % 10;
        rev = rev / 10;

        switch (p)
        {
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine";
            break;
        case 0:
            cout << "Zero ";
            break;

        default:
            break;
        }
    }
    // cout << endl
    //      << rev;
}

void GDC()
{
    int m, n;
    cout << "Enter M,N: ";
    cin >> m >> n;
    while(m!= n)
    {
        if (m > n)
        {
            m = m - n;
        }

        else if (m < n)
        {
            n = n - m;
        }
    }
    cout<<"GDC "<<m;
}
int main()
{
    // factorofnumber();
    // factorial();
    // sumoffactors();
    // perfectnumber();
    // digitofnumber();
    // armstrongnumber();
    // reversenumber();
    // plaindrome();
    // numberinwords();
    GDC();
    // int i=0;

    // for(;;)
    // {
    //     cout<<i<<"Hello";
    //     cout<<endl;
    //     i++;
    // }

    return 0;
}