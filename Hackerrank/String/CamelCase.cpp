#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    string s;
    ll e=0;
    cin>>s;
    for(ll i=1;i<s.size();i++)
    {
        if(isupper(s[i]))e++;
    }
    cout<<e+1<<endl;

return 0;
}
