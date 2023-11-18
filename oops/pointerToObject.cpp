#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length;
    int breath;

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
    // memory loated in stack
    Rectangle r1;
    Rectangle *ptr;
    ptr = &r1;
    // r1.length = 10;
    ptr->length = 10;
    r1.breath = 7;
    cout << r1.area() << endl;
    cout << ptr->perimeter() << endl;

    // memory alocate in heap
    Rectangle *ptr2=new Rectangle;
    // ptr = &r1;
    // r1.length = 10;
    ptr2->length = 10;
    ptr2->breath = 5;
    cout << ptr2->area() << endl;
    cout << ptr2->perimeter();
    return 0;
}