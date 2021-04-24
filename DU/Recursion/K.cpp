#include<bits/stdc++.h>
using namespace std;
void run(int x[],int _)
{
    if(_==0)
    {
        cout<<x[0]<<endl;return;
    }
    if(_%2==0)
    {
        cout<<x[_]<<" ";
    }
    run(x,_-1);
}
int main()
{
    int a,_,x[10000];
    cin>>_;
    for(int i=0;i<_;i++)
    {
        cin>>x[i];
    }
    run(x,_-1);
return 0;
}

