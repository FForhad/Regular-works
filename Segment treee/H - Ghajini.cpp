#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int ar[9000000],treemin[9000000],treemax[9000000];

int buildmin(int node,int L,int R)
{
    if(L==R)
    {
        return treemin[node]=ar[L];
    }

    int mid=(L+R)/2;
    buildmin(2*node,L,mid);
    buildmin(2*node +1,mid+1,R);

    return treemin[node]=min(treemin[2*node],treemin[2*node +1]);
}
int buildmax(int node,int L,int R)
{
    if(L==R)
    {
        return treemax[node]=ar[L];
    }

    int mid=(L+R)/2;
    buildmax(2*node,L,mid);
    buildmax(2*node +1,mid+1,R);

    return treemax[node]=max(treemax[2*node],treemax[2*node +1]);
}
int querymin(int node,int L,int R,int l,int r)
{
    if(l>r)return 9000000;
    if(L==l && R==r)
    {
        return treemin[node];
    }
    int mid=(L+R)/2;
    int a=querymin(2*node,L,mid,l,min(r,mid));
    int b=querymin(2*node +1,mid+1,R,max(l,mid+1),r);

    return min(a,b);
}
int querymax(int node,int L,int R,int l,int r)
{
    if(l>r)return -1;
    if(L==l && R==r)
    {
        return treemax[node];
    }
    int mid=(L+R)/2;
    int a=querymax(2*node,L,mid,l,min(r,mid));
    int b=querymax(2*node +1,mid+1,R,max(l,mid+1),r);

    return max(a,b);
}

int main()
{
    int a,b,c=0,d,e=0,_;
    cin>>b;
    while(b--)
    {
        cin>>_>>a;
        for(int i=1;i<=_;i++)
        {
            cin>>ar[i];
        }
        buildmin(1,1,_);
        buildmax(1,1,_);
        e=0;
        for(int i=1;i<=(_-a);i++)
        {
           d=querymax(1,1,_,i,i+a-1)-querymin(1,1,_,i,i+a-1);
           e=max(e,d);
        }
        cout<<"Case "<<++c<<": "<<e<<endl;
    }
    return 0;
}

