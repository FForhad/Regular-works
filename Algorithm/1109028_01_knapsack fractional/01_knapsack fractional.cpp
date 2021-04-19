#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

ld x[101],y[101],z[101];

void FKnapsack(ll n,ll b)///n item and b=bag size;
{
    for(ll i=1;i<n;i++)
    {
        int mx=i;
        for(ll j=i+1;j<=n;j++)
        {
            if(x[j]/y[j] > x[mx]/y[mx])
            {
                mx=j;
            }
        }
        swap(x[mx],x[i]);
        swap(y[mx],y[i]);
    }
    ll bag=b;
    ll i;
    for(i=1;i<=n;i++)
    {
        if(y[i]>bag) break;
        z[i]=1;
        bag-=y[i];
    }
    if(i<=n)
    {
        z[i]=bag/y[i];
    }
}

void profit(ll n)
{
    ld e=0;
    for(ll i=1;i<=n;i++)
    {
        e+=x[i]*z[i];
    }
    cout<<e<<endl;
}

int main()
{
    ll a,b,c,d,e,n,i;

    freopen("input_FKnapsack.txt","r",stdin);
    freopen("output_FKnapsack.txt","w",stdout);
    cin>>n>>b;
    for(i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i];
    }
    FKnapsack(n,b);
    profit(n);

return 0;
}

