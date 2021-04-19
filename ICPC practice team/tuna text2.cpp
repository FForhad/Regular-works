#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define fr(i,a) for(ll i=0;i<a;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
using namespace std;
ll x[10000000],y[10000000];

int main()
{
    ll a,b,c,d,e=0,f,_,r;
    string s;
    cin>>_;
    while(_--)
    {
        cin>>a>>b>>c>>d;
        e=c-a;
        f=d-b;
        r=gcd(abs(e),abs(f));
        cout<<r+1<<endl;

    }
return 0;
}
