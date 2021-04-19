#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class car
{
public:
    string Brand_name;
    ll id;
    car()
    {
        id=111;
        cout<<"Default id : "<<id<<endl;
    }
    car(ll x)
    {
        id = x;
        cout<<"Modified id : "<<id<<endl;
    }
};
int main()
{
    ld a,b,c,d,e=0,_;

    car Ford;///default
    car Toyota(206);///modified

return 0;
}
