#include <iostream>
#include <vector>
#include <queue>
#define inf 9999999
using namespace std;

vector<vector<pair<int,int>>> adj(100);
vector<int>dist(100);

void dijkstra(int u,int t)
{
    priority_queue<pair<int,int>>q;
    int b,w,i;

    q.push({0,u});
    while(!q.empty()) {
        u=q.top().second;
        q.pop();
        for(i=0;i<adj[u].size();i++) {
            b=adj[u][i].first;w=adj[u][i].second;
            if(dist[b]>dist[u]+w) {
                dist[b]=dist[u]+w;
                q.push({-dist[b],b});
            }
        }
    }

     cout<<dist[t];
}

int main()
{
    int i,n,m,x,y,w,t;

    cin>>n>>m;//n is node m is axis.
    for(i=0;i<m;i++)
    {
        cin>>x>>y>>w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }

    cin>>t;

    for(i=0;i<n;i++) {
        dist[i]=inf;
    }
    dist[0]=0;
    dijkstra(0,t);
}
