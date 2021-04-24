#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
void run(string s,ll n,ll r,ll indx,char ch[],ll i)
{

    if(indx==r)
    {
        for(int i=0;i<r;i++)
            cout<<ch[i];
        cout<<endl;
        return;
    }

    if(i>=n)
        return;

    ch[indx]=s[i];
    run(s,n,r,indx+1,ch,i+1);

    while(s[i]==s[i+1])
    {
        i++;
    }
    run(s,n,r,indx,ch,i+1);
}
int main()
{
    ll a,b,c,e,d,_;
    string s;
    while(cin>>s>>a)
    {
        sort(s.begin(),s.end());
        char ch[a];
        run(s,s.size(),a,0,ch,0);
    }
return 0;
}
