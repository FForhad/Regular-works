#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define fr(i,a) for(ll i=0;i<a;i++)
using namespace std;

class Sum
{
public :
    int n, s=0;
    int odd();
};
inline Sum::odd()
{
    cout<<"Please enter the value to print the Odd Number."<<endl;
    cin>>n;
    cout<<"The output is : "<<endl;
    for(ll i=1;i<=n;i++)
    {
        cout<<2*i-1<<" ";
        s+=(2*i-1);
    }
    cout<<"\nThe sum of Odd Numbers is : "<<s;
 }
int main()
{
    Sum u;
    u.odd();
}
