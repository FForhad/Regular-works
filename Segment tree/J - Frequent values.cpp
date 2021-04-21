#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll x[900000];
multimap<ll, ll> invert(map<ll, ll> & mp)
{
	multimap<ll, ll> multiMap;
	for (auto it=mp.begin(); it!=mp.end(); it++)
	{
		multiMap.insert(make_pair(it->second, it->first));
	}

	return multiMap;
}
int main()
{
    ll a,b,c,d,e=0,_;
    while(cin>>_ && _!=0)
    {
        cin>>a;
        for(int i=1;i<=_;i++)
        {
            cin>>x[i];
        }
        while(a--)
        {
            cin>>c>>d;
            map<ll,ll>mp;
            for(int i=c;i<=d;i++)
            {
                mp[x[i]]++;
            }
            e=0;
            sort(mp.begin(),mp.end(),greater<ll>());
        }
    }
    return 0;
}
