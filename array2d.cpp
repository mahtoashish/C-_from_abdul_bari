#include <iostream>
using namespace std;
void matrixAddition()
{
    // Add two matrix
    int a[2][3] = {2, 4, 6, 8, 10, 12};
    int b[2][3] = {1, 3, 5, 7, 9, 11};
    int c[2][3];
    cout << "Array A" << endl;
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            cout << a[k][l] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "Array B" << endl;
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            cout << b[k][l] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "Array c" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            cout << c[k][l] << " ";
        }
        cout << endl;
    }
}

void average_array()
{
    int n;
    float num[100], sum = 0, average;
    cout << "Enter the number for elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    cout << "Average= " << average;
}
void mulpication_of_matrix()
{
     int a[2][3] = {2, 4, 6, 8, 10, 12};
    int b[2][3] = {1, 3, 5, 7, 9, 11};
    int c[2][3];
    cout << "Array A" << endl;
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            cout << a[k][l] << " ";
        }
        cout << endl;
    }
    cout << endl
         << "Array B" << endl;
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            cout << b[k][l] << " ";
        }
        cout << endl;
    }

    cout << endl
         << "Array c" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // for (int k =

}
//multiplication of 2d array?
int main()
{
    // matrixAddition();
    average_array();
    mulpication_of_matrix();
    return 0;
}