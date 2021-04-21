#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll Merge(ll a[],ll s,ll m,ll e)
{

    ll x1,x2,i,j,k;
    x1=m-s+1;
    x2=e-m;
    ll A[x1],B[x2];
    for(i=0; i<x1; i++)
    {
        A[i]=a[s+i];
    }
    for(j=0; j<x2; j++)
    {
        B[j]=a[m+j+1];
    }
    i=0,j=0;
    for(k=s; i<x1&&j<x2; k++)
    {
        if(A[i]<B[j])
        {
            a[k]=A[i++];
        }
        else
        {
            a[k]=B[j++];
        }
    }
    while(i<x1)
    {
        a[k++]=A[i++];
    }
    while(j<x2)
    {
        a[k++]=B[j++];
    }
}

ll MergeSort(ll a[],ll s,ll e)
{
    ll m;
    if(s<e)
    {
        m=(s+e)/2;
        MergeSort(a,s,m);
        MergeSort(a,m+1,e);
        Merge(a,s,m,e);
    }
}
ll x[1000000];
int main()
{
    ll a,b,c,d,e,_;
    cin>>_;
    for(int i=0;i<_;i++)
    {
        cin>>x[i];
    }
    MergeSort(x,0,_-1);
    cout<<x[0];
    for(int i=1;i<_;i++)
    {
        cout<<" "<<x[i];
    }
    cout<<endl;
return 0;
}
