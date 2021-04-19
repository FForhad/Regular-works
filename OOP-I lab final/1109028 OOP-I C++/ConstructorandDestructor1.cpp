#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Cube
{
public:
    ld side;
    ld volume()
    {
        return(side*side*side);
    }
    Cube(ld side1)
    {
        cout << "A constructor is called" << endl;
        side=side1;
    }
    Cube()
    {
        cout << "A default constructor is called " << endl;

    }
    ~Cube()
    {
        cout << "Destructing " << side << endl;
    }
};

int main()
{
    Cube c1(2.34);
    Cube c2;
    cout << "The side of the cube is: " << c1.side << endl;
    cout << "The volume of the first cube is : " << c1.volume() << endl;
    cout << "Enter the length of the second cube : " ;
    cin >> c2.side;
    cout << "The volume of second cube is : " << c2.volume() << endl;
return(0);
}
