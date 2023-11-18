#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
void area_of_triangle()
{
    double b, h;
    double area;
    cout << "Enter the values: ";
    cin >> b >> h;
    area = (b * h) / 2;
    cout << "Area of triangle: ";
    cout << area;
}

void sum_of_numbers() // sum of n 's natural numbers
{
    int n;
    int sum;
    cout << "Enter the number: ";
    cin >> n;
    sum = n * (n + 1) / 2;
    cout << "SUM= " << sum;
}
float quadratic_equation()
{

    int a, b, c;
    cout << "Enter the values of a, b, c: ";
    cin >> a >> b >> c;

    float root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    float root2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);
    cout << "Root 1 = " << root1 << endl;
    cout << "Root 2 = " << root2;
}
void finding_speed()
{
    int u,v,a;
    cout<<"Enter\n"<<"Intial speed, Final speed and Acceleration: \n";
    cin>>u>>v>>a;
    float speed=(v*v-u*u)/(2*a);
    cout<<"Speed= "<<speed;
}
float simple_intrest()
{
    int p,r,t;
    cout<<"Enter\n"<<"Principal, "<<"Rate and Time: "<<endl;
    cin>>p>>r>>t;
    cout<<"Simple intrest= ";
    return (p*r*t)/100;
    
}


int main()
{
    // area_of_triangle();
    // sum_of_numbers();
    // double quad=quadratic_equation();
    // quadratic_equation();
    // finding_speed();
    // cout<<simple_intrest();

}