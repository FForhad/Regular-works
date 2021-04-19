#include<bits/stdc++.h>
using namespace std;
int ar[900000],tree[900000];

int build(int node,int L,int R)
{
    if(L==R)
    {
        return tree[node]=ar[L];
    }

    int mid=(L+R)/2;
    build(2*node,L,mid);
    build(2*node +1,mid+1,R);

    return tree[node]=min(tree[2*node],tree[2*node +1]);
}
int query(int node,int L,int R,int l,int r)
{
    if(l>r)return 900000;
    if(L==l && R==r)
    {
        return tree[node];
    }
    int mid=(L+R)/2;
    int a=query(2*node,L,mid,l,min(r,mid));
    int b=query(2*node +1,mid+1,R,max(l,mid+1),r);

    return min(a,b);
}
int main()
{
    ///fforhad;

    int _,c,d,e=0,f=0,j,n,k=1,l,a,b;
    string s,p,t;
    char ch,ss[100];

    cin>>_;
    while(_--)
    {
        cin>>a>>b;
        for(int i=1;i<=a;i++)
        {
            cin>>ar[i];
        }
        build(1,1,a);
        cout<<"Case "<<k++<<":"<<endl;
        while(b--)
        {
            cin>>c>>d;
            cout<<query(1,1,a,c,d)<<endl;
        }
    }
return 0;
}
