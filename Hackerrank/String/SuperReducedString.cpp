#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(ll i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            s.erase(i-1,2);i=0;
        }
    }
    if(s.size())
        cout<<s<<endl;
    else
        cout<<"Empty String"<<endl;

return 0;
}
