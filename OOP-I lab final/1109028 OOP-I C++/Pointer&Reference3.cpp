#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main()
{
    ll a[1000],s=0,b;
    ll *ptr;
    cout<<"Enter the size of Array : ";
    cin>>b;
    cout << "Enter the Numbers: ";
    for (ll i=0;i<b;i++)
    {
        cin >>a[i];
    }
    ptr = a;
    cout<<"Reverse order : ";
    for (ll i=b-1;i>=0;i--)
    {
        cout<<*(ptr+i)<<" ";
    }cout<<endl;
return 0;
}
