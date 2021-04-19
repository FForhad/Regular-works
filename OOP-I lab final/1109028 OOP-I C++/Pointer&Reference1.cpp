#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

ll *sortAsc(ll *p, ll n)
{
    for(ll i=0;i<n;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(*(p+j)<*(p+i))
            {
                swap(*(p+i),*(p+j));
            }
        }
    }
return p;
}

int main()
{
    ll arr[]={23,34,2,3,5,12,42,56,89,8};
    ll *p=sortAsc(arr,10);

    ll i;
    cout<<"Ascending order: ";
    for(i=0;i<10;i++)
    {
        cout<<*(p+i)<<" ";
    }cout<<endl<<endl;
    cout<<"Descending order: ";
    for(i=9;i>=0;i--)
    {
        cout<<*(p+i)<<" ";
    }cout<<endl;

return 0;
}
