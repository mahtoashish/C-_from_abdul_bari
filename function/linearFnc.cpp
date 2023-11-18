#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int key;
    int arr[] = {10, 21, 6, 9, 19, 89, 4, 16};
    cout << "Enter the key: ";
    cin >> key;
    int index= linearSearch(arr, 8, key);
    cout<<"index: "<<index<<endl;
    // cout << "not found" << endl;
    return 0;
}