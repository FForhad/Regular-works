#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    void printArea()
    {
        cout << "Area = " << length*breadth << endl;
    }
    void printPerimeter()
    {
        cout << "Perimeter = " << 2*(length+breadth) << endl;
    }
};

class Square : public Rectangle
{
private:
    int side;
public:
    Square(int s):Rectangle(s,s)   {
        //super(s,s);
        Rectangle(s,s);
    }
};

int main()
{
    int a,b;
    cout << "Enter length of rectangle: ";
    cin >> a;
    cout << "Enter breadth of rectangle: ";
    cin >> b;
    Rectangle R(a,b);
    cout << "Results of Rectangle :" << endl;
    R.printArea();
    R.printPerimeter();
    cout << "Enter side of square: ";
    cin >> a;
    Square s(a);
    cout << endl;
    cout << "Results of Square :" << endl;
    s.printArea();
    s.printPerimeter();
}

