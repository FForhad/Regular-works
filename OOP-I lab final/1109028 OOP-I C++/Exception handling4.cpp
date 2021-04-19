#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main()
{
    ll a,b,c,d,e=0,_;
    string s;
    cin>>s;
    try
    {
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='@')
                e=1;
        }
        if (e==1)
            throw a;
        cout << "Leaving try block.\n";
    }
    catch(ll a)
    {
        cout << "Yes Email"<< endl; return 0;
    }
    cout << "Not Email." << endl;

    return 0;

}

