#include<bits/stdc++.h>
typedef unsigned long long int ui;
using namespace std;

void run(ui a)
{
    if(a==0)
    {
        return;
    }
    run(a>>1);
    cout<<a%2;
}
void solve()
{
    ui a;
    cin>>a;
    run(a);
    cout<<endl;
}
int main()
{
    ui _;
    cin>>_;
    while(_--)
        {
            solve();
        }
return 0;
}


