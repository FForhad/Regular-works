#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll x[1100000];

ll mostFrequent(ll arr[], ll n,ll a,ll b)
{
    // Sort the array
    //sort(arr, arr + n);

    // find the max frequency using linear traversal
    ll max_count = 1, res = arr[a], curr_count = 1;
    for (int i = a+1; i <=b; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }

    // If last element is most frequent
    if (curr_count > max_count)
    {
        max_count = curr_count;}
        res = max_count;


    return res;
}
int main()
{
    ll a,b,c,d,e=1,_;
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
            //map<int,int>mp;
            cout<<mostFrequent(x,(d-c)+1,c,d)<<endl;
            //cout<<e<<endl;
        }
    }
    return 0;
}
