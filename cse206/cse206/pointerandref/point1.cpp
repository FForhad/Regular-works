#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,n,j,t;
    cout<<"Enter number of elements:\n";
    cin>>n;
    cout<<"Enter array:\n";
    for (i=0; i<n; i++)
    {
        cin>>a+i;
    }
    for (i=0; i<(n-1); i++)
    {
        for (j=i+1; i<n; i++)
        {
            if (*(a+i)>*(a+j))
            {
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
        }
    }
    cout<<"Sorted array (ascending) is:\n";
    for (i=0; i<n; i++)
    {
        cin>>*(a+i);
    }
    cout<<"\n";
}
