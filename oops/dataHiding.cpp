#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breath;

public:
    void setLength(int l)
    {
        if(l>=0)
            length=l;
        
        else
            length=0;
    }
    void setBreath(int b)
    {
        if(b>=0)
            breath=b;
        
        else
            breath=0;
    }
    int area()
    {
        return length * breath;
    }
    int perimeter()
    {
        return 2 * (length + breath);
    }
};
int main()
{

    Rectangle r1, r2;
    // r1.length = 10;
    // r1.breath = 5;
    r1.setLength(-10);
    r1.setBreath(5);
    cout << r1.area() << endl;
    cout << r1.perimeter();
    return 0;
}