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
    ll a,b,c,d,e=0,_,Shift[]={13};
    string s;
    cin>>_;
    while(_--)
    {
        string p="";
        cin>>s;
        fr(i,s.size())
        {
            if(s[i]>=65 && s[i]<=90)
            {
                s[i]=s[i]+32;
            }
            else
                s[i]=s[i]-32;
        }
        reverse(s.begin(),s.end());
        fr(i,s.size())
        {
            if (isupper(s[i]))
            {
                p += char((ll(s[i])+13-'A')%26+'A');
            }
            else if(islower(s[i]))
            {
                p += char((ll(s[i])+13-'a')%26+'a');
            }
        }
        s=p;
        cout<<s<<endl;
    }

return 0;
}
