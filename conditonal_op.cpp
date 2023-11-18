#include <iostream>
using namespace std;
void maximumoftwonumbers()
{
    int a, b;
    cout << "Enter the numbers: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "A is greater than B." << endl;
    }
    else
    {
        cout << "B is greater or equal to A.";
    }
}

void working_hours()
{
    int hour;
    cout << "Enter the num= ";
    cin >> hour;
    if (hour >= 9 && hour <= 18) // the compuend intrest
    {
        cout << " Working";
    }
    else
    {
        cout << "leisure";
    }
}
void young_age()
{
    int age;
    cout << "Enter your Age : ";
    cin >> age;
    if (age >= 12 && age <= 50)
    {
        cout << "young";
    }
    else
    {
        cout << " not young ";
    }
}
void special_offer()
{
    int age;
    cout << "Enter the age : ";
    cin >> age;
    if (age < 12 || age > 50)
    {
        cout << "Under the offer";
    }
    else
    {
        cout << "Not eliigible";
    }
}
void natureofroots()
{
    double a, b, c, d;
    cout << " Enter the valure of a,b,c :";
    cin >> a >> b >> c;
    d = ((b * b) - (4 * (a)*c));
    if (d == 0)
    {
        cout << "Real and equal";
    }
    else if (d > 0)
        cout << "Real and unequal";
    else
    {
        cout << "imagiary";
    }
}

void diaplay_grades()
{
    float m1, m2, m3;
    cout << "Enter the marks: ";
    cin >> m1 >> m2 >> m3;
    float avg = (m1 + m2 + m3) / 3.0;
    if (avg >= 60)
        cout << "A";
    else if (avg >= 35 && avg < 60)
        cout << "B";
    else
    {
        cout << "C";
    }
}
void discount()
{
    int amount;
    cin >> amount;
    double disAmount;

    // write nested onditions to print discounted amount
    if (amount >= 5000)
    {

        disAmount = amount - amount * 20 / 100.0;
        cout << disAmount;
    }
    else if (amount >= 2000 && amount < 5000)
    {
        disAmount = amount - amount * 10 / 100.0;
         cout << disAmount;
    }
    else
    {
        disAmount = amount - amount * 5 / 100.0;
         cout << disAmount;
    }
}
int main()
{
    // maximumoftwonumbers();
    // working_hours();
    // young_age();
    // special_offer();
    // natureofroots();
    // diaplay_grades();
    discount();
    return 0;
}