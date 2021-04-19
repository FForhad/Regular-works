#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class AreaOfCircle
{
    ll r;
public:
    AreaOfCircle()
    {
        cout << "Enter the radius of circle : ";
        cin >> r;
    }
    friend void calculate();
};

void calculate()
{
    AreaOfCircle ob;
    cout<<"Area of the Circle : "<< 3.14159562*ob.r*ob.r << endl;
}

int main()
{
    calculate();
return 0;
}
