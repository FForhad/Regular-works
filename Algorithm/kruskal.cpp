#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll ii,jj,k,xx,bx,u,v,n,nee=1;
ll minnx,mincost=0,cost[100][100],parent[9];
// Find set of vertex i
int find(ll ii)
{
    while(parent[ii])
        ii=parent[ii];
    return ii;
}
// Does union of i and j. It returns
// false if i and j are already in same
// set.
int uni(ll ii,ll jj)
{
    if(ii!=jj)
    {
        parent[jj]=ii;
        return 1;
    }
    return 0;
}

void Kruskal(ll cost[][100], ll n)
{
    while(nee < n)
    {
        for(ii=0,minnx=INT_MAX; ii<n; ii++)
        {
            for(jj=0; jj <n; jj++)
            {
                if(cost[ii][jj] < minnx)
                {
                    minnx=cost[ii][jj];
                    xx=u=ii;
                    bx=v=jj;
                }
            }
        }
        u=find(u);
        v=find(v);
        if(uni(u,v))
        {
            cout<<"Edge"<<nee++<<" :("<<xx<<" "<<bx<<")"<<"cost: "<<minnx<<endl;
            mincost +=minnx;
        }
        cost[xx][bx]=cost[bx][xx]=INT_MAX;
    }
    cout << "Minimum cost is : " << mincost << endl;
}
int main()
{
    cout << "Enter the number of nodes:";
    cin >> n;
    cout << "Enter the adjacency matrix:" << endl;
    for(ii=0; ii<n; ii++)
    {
        for(jj=0; jj<n; jj++)
        {
            cin >> cost[ii][jj];
            if(cost[ii][jj]==0)
                cost[ii][jj]=INT_MAX;
        }
    }
    Kruskal(cost, n);

}
