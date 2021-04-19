#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define fr(i,a) for(ll i=0;i<a;i++)
using namespace std;

inline int Floyds_Triangle(ll n)
{
    n++;
    ll num=1;
    fr(i,n)
    {
        fr(j,i)
        {
            cout << num << " ";
            num++;
        }
        cout<<endl;
    }
}
int main()
{
    ll n;
    printf("Enter the number of rows:");
    cin>>n;
    Floyds_Triangle(n);
    return 0;
}
