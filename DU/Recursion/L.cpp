#include<bits/stdc++.h>
using namespace std;

long long int run(long long int x[],long long int a)
{
    if(a==0) return 0;

    return(run(x,a-1)+x[a-1]);
}
int main()
{
    long long int a,i,j;
    long long int x[9001];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }
    cout<<run(x,a)<<endl;
return 0;
}


