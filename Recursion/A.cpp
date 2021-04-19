#include<bits/stdc++.h>
using namespace std;
void run(int i,int a)
{
    if(i>a)return;

    cout<<i++<<endl;
    run(i,a);
}
int main()
{
    int a,i=1;
    cin>>a;
    run(i,a);
return 0;
}
