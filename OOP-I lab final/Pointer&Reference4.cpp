#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

void cyclicSwap(ll *a, ll *b, ll *c)
{
    swap(*b,*a);
    swap(*a,*c);
}

int main()
{
    ll a, b, c;

    cout<<"Enter value of a, b and c respectively: ";
    cin>>a>>b>>c;

    cout<<"Value before swapping: "<<endl;
    cout<<"a, b and c respectively are: "<<a<<", "<<b<<", "<<c<<endl;

    cyclicSwap(&a,&b,&c);

    cout<<"Value after swapping numbers in cycle: "<<endl;
    cout<<"a, b and c respectively are: "<<a<<", "<<b<<", "<<c<<endl;

return 0;
}


