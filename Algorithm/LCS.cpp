#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

void LCS(string s,string t)
{
    string p;
    ll e=0;
    ll k=0;
    for(ll i=0;i<s.size();i++)
    {
        for(ll j=0;j<t.size();j++)
        {
            if(s[i]==t[j])
            {
                p[k++]=s[i];
                i++;
                e++;
            }
        }
    }
    cout<<"LCS : "<<e<<endl;
    for(ll i=0;i<k;i++)
    {
        cout<<p[i];
    }
    cout<<endl;
}


int main()
{
    ll a,b,c,d=5,_;
    ld e=5.5;
    string s,t,p;

    cout<<"ENTER TWO STRINGS : ";
    while(cin>>s>>p)
    {
        cin>>t;
        try
        {
            if(t=="done")
            {
                throw d;
            }
            else
                throw e;
        }
        catch(ll d)
        {
            LCS(s,p);
        }
        catch(ld e)
        {
            cout<<"error"<<endl;
        }

        cout<<"ENTER TWO STRINGS : ";

    }
return 0;
}
