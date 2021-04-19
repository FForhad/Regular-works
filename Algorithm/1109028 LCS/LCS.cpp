#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;


int main()
{
    ll a,b,c=0,d=5,_,f=0;
    ld e=5.5;
    string s,t,p,q;

    while(1)
    {
        cin>>s>>p;

        string t="";
        for(ll i=0;i<s.size();i++)
        {
            for(ll j=0;j<p.size();j++)
            {
                if(s[i]==p[j])
                {
                    t=t+s[i];
                    i++;
                    f++;
                }
            }
        }
        x[c++]=f;
        q[c++]=t;


        try
        {
            if(s=="done" || p=="done")
            {
                throw d;
            }
            else
                throw e;
        }
        catch(ll d)
        {

        }
        catch(ld e)
        {
            cout<<"error"<<endl;
        }

        cout<<"ENTER TWO STRINGS : ";

    }
return 0;
}
