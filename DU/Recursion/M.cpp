#include<bits/stdc++.h>
typedef unsigned long long int ui;
using namespace std;

void run(string s,ui a)
{
    if(a==1)
    {
        cout<<(s[0]);
        return;
    }

    run(s,--a);
    cout<<" "<<s[a];
}
void solve()
{
    ui a;
    string s;
    cin>>s;
    a=s.size();
    run(s,a);
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


