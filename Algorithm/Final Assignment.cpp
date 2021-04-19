#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;
///O(logn,1,n,nlogn,n*n,2^n,n!)

ll Merge(ll a[],ll s,ll m,ll e)
{

          ll x1,x2,i,j,k;
          x1=m-s+1;
          x2=e-m;
          ll A[x1],B[x2];
          for(i=0;i<x1;i++)
          {
                    A[i]=a[s+i];
          }
          for(j=0;j<x2;j++)
          {
                    B[j]=a[m+j+1];
          }
          i=0,j=0;
          for(k=s;i<x1&&j<x2;k++)
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

ll Partition(ll a[],ll s,ll e)
{
          ll pivot=a[e];
          ll i;
          for(i=s;i<e;i++)
          {
                    if(a[i]<=pivot)
                    {
                    swap(a[i],a[s]);
                    s++;
                    }
          }
          swap(a[i],a[s]);
return s;
}

void QuickSort(ll a[],ll s,ll e)
{
          if(s<e)
          {
                    ll x=Partition(a,s,e);
                    QuickSort(a,s,x-1);
                    QuickSort(a,x+1,e);
          }
}

void Print(ll a[],ll v,ll k)
{
    for(ll i=v;i<k;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

ld x[101],y[101],z[101];
void FKnapsack(ll n,ll b)///n item and b=bag size;
{
    for(ll i=1;i<n;i++)
    {
        ll mx=i;
        for(ll j=i+1;j<=n;j++)
        {
            if(x[j]/y[j] > x[mx]/y[mx])
            {
                mx=j;
            }
        }
        swap(x[mx],x[i]);
        swap(y[mx],y[i]);
    }
    ll bag=b;
    ll i;
    for(i=1;i<=n;i++)
    {
        if(y[i]>bag) break;
        z[i]=1;
        bag-=y[i];
    }
    if(i<=n)
    {
        z[i]=bag/y[i];
    }
}

void profit(ll n)
{
    ld e=0;
    for(ll i=1;i<=n;i++)
    {
        e+=x[i]*z[i];
    }
    cout<<e<<endl;
}

void LCS()///complexity nlogn;
{
    string s,t;
    cout<<"Enter 2 strings to get LCS :";
    cin>>s>>t;
    cout<<endl;
    string p;
    ll e=0;
    ll k=0,f=0;
    for(ll i=0;i<s.size();i++)
    {
        for(ll j=0;j<t.size();j++)
        {
            if(s[i]==t[j])
            {
                p[k++]=s[i];
                i++;
                e++;
            }
        }
    }
    cout<<"LCS : "<<e<<endl;
    for(ll i=0;i<k;i++)
    {
        cout<<p[i];
    }
    cout<<endl;
}

ll Knapsack(ll b,ll y[],ll x[], ll n)
{ //"X" for profit & "Y" for weight
    if(n==0 || b==0)
    {
        return 0;
    }
    if(y[n-1]>b)
    {
        return Knapsack(b,y,x,n-1);
    }
    else
    {
        return max(x[n-1]+Knapsack(b-y[n-1],y,x,n-1),Knapsack(b,y,x,n-1));
    }
}

int main()
{
    while(1){
    ll choose,k,a[10000];
    cout<< "Choose your task:" << endl
        << "1. Sorting" << endl
        << "2. Greedy Programming" << endl
        << "3. Dynamic Programming" << endl;

    cin >> choose;
    if(choose==1)
    {
        cout<<"Enter the size of array: ";
        cin>>k;
        cout<<"Enter all elements: ";
        for(ll i=0;i<k;i++)
        {
            cin>>a[i];
        }

        cout<< "Choose your operation:" << endl
            << "1. Merge Sort" << endl
            << "2. Quick Sort" << endl
            << "3. Both" << endl;
        cin >> choose;
        if(choose==1)
        {
            cout<<"MergeSingleArray"<<endl;
            MergeSort(a,0,k-1);
            Print(a,0,k);
        }
        else if(choose==2)
        {
            QuickSort(a,0,k-1);
            cout<<"QuickSort"<<endl;
            Print(a,0,k);
        }
        else if(choose==3)
        {
            MergeSort(a,0,k-1);
            cout<<"MergeSort"<<endl;
            Print(a,0,k);
            cout<<endl;
            QuickSort(a,0,k-1);
            cout<<"QuickSort"<<endl;
            Print(a,0,k);
        }
    }
    else if(choose==2)
    {
        cout<< "Choose your operation:" << endl
            << "1. Dijkstra Algorithm" << endl
            << "2. Minimum Spanning Tree(Prims & Krushkal)" << endl
            << "3. Fractional Knapsack" << endl;
        cin >> choose;
        if(choose==1)
        {
            ///Dijkstra
        }
        else if(choose==2)
        {
            ///Minimum Spanning Tree
        }
        else if(choose==3)
        {
            ll n,b;
            cout<<"Enter the value of item and capcity : ";
            cin>>n>>b;
            cout<<endl;
            cout<<"Enter profit and weight: "<<endl;
            for(ll i=1;i<=n;i++)
            {
                cin>>x[i]>>y[i];
            }
            FKnapsack(n,b);
            cout<<"the maximum profit is :";
            profit(n);
        }
    }
    else if(choose==3)
    {
        cout<< "Choose your operation:" << endl
            << "1. Floyd Warshall Algorithm" << endl
            << "2. Least Common Subsequence" << endl
            << "3. 0/1 Knapsack" << endl;
        cin >> choose;
        if(choose==1)
        {
            ///Floyd Warshall
        }
        else if(choose==2)
        {
            LCS();
        }
        else if(choose==3)
        {
            ll n,b;
            cout<<"Enter the value of item and capcity : ";
            cin>>n>>b;
            cout<<endl;
            cout<<"Enter profit and weight: "<<endl;
            ll xr[n],yr[n];

            for(int i=0;i<n;i++)
            {
                cin>>xr[i]>>yr[i];///profit and weight input;
            }
            cout<<Knapsack(b,yr,xr,n)<<endl;
        }
    }
    else
        cout<<"No option was chosen"<<endl;
    }
return 0;
}

