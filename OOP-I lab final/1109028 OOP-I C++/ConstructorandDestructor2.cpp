#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class CRectArea
{
private:
    ll length;
    ll breadth;
public:
    CRectArea (ll,ll);
    ll areaofrect ()
    {
        return (length * breadth);
    }
    ll length1()
    {
        return length;
    }
    ll breadth1()
    {
        return breadth;
    }
};


CRectArea::CRectArea(ll x, ll y)
{
    length = x;
    breadth = y;
}

int main ()
{
    CRectArea myrectangle (2,2);

    cout<<"The Length of Rectangle : "<<myrectangle.length1()<<"\n";
    cout<<"The Breadth of Rectangle : "<<myrectangle.breadth1()<<"\n";
    cout << "The area of rectangle is : " << myrectangle.areaofrect()<< endl;
    return 0;
}
