#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

void Prims(ll n,ll cost[100][100])
{
    ll a,b,u,v,i,j,ne=1;
    ll visited[10]= {0},minn,mincost=0;
    visited[1]=1;
    while(ne < n)
    {
        for(i=1,minn=999; i<=n; i++)
            for(j=1; j<=n; j++)
                if(cost[i][j]< minn)
                    if(visited[i]!=0)
                    {
                        minn=cost[i][j];
                        a=u=i;
                        b=v=j;
                    }
        if(visited[u]==0 || visited[v]==0)
        {
            cout<<"Edge"<<ne++<<" :("<<a<<" "<<b<<")"<<"cost: "<<minn<<endl;
            mincost+=minn;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    cout<<mincost<<endl;
}
int main()
{
    ll n;
    ll cost[100][100];
    cout<<"\nEnter the number of nodes:";
    scanf("%d",&n);
    cout<<"\nEnter the adjacency matrix:\n";
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=n; j++)
        {
            scanf("%d",&cost[i][j]);
            if(cost[i][j]==0)
            {
                cost[i][j]=999;
            }
        }
    }
    Prims(n,cost);

}
/*
0 3 1 6 0 0
3 0 5 0 3 0
1 5 0 5 6 4
6 0 5 0 0 2
0 3 6 0 0 6
0 0 4 2 6 0
*/
