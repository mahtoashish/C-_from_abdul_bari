#include <iostream>
using namespace std;
int main()
{
    int a[10] = {2, 3, 6, 7, 8, 11, 23, 43, 45, 90};
    int l = 0, h = 9, n = 10;
    int key;
    cout << "Enter key: ";
    cin >> key;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "Founded";
            return 0;
        }
        else if (key > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << "not found";
    return 0;
}