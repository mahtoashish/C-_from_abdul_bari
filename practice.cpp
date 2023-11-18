#include <iostream>
#include <cmath>
#include<ctime>
using namespace std;
int main()
{
    // double x=10,y=5;

    // double z=(x+10)/(3*y);
    // cout<<z;

    // sales=$95000
    // state tax=4%
    // county tax=2%

    double sales = 95000;
    double statetax, countytax;

    statetax = (sales * 4) / 100;
    countytax = (sales * 2) / 100;

    cout << "state tax: $" << statetax << endl;
    cout << "county tax: $" << countytax << endl;

    cout << "Total sales: $" << sales - (statetax + countytax) << endl;

    // area of circle
    const double pi = 3.14;
    double r=3;
    // cin >> r;

    auto area = pi * pow(r, 2);
    cout << "Area of circle :" << area<<endl;

    // rolling dice
    const int max_value=6;
    const int min_value=1;
    srand(time(0));
    int number= (rand()%(max_value-min_value)+min_value);
    int number2= (rand()%(max_value-min_value)+min_value);

    cout<<number<<" "<<number2;
    
    return 0;
}