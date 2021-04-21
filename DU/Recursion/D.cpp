#include<bits/stdc++.h>
using namespace std;

int run(int x[],int a)
{
    if(a==1)
    {
        return x[0];
    }
    else
    {
        return max(x[a-1],run(x,a-1));
    }
}
int main()
{
    int a,i,j;
    int x[9001];
    cin>>a;
    for(i=0;i<a;i++)
    {
        cin>>x[i];
    }
    cout<<run(x,a)<<endl;
return 0;
}


