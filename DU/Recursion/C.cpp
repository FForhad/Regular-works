#include<bits/stdc++.h>
typedef unsigned long long int ui;
using namespace std;

ui run(ui a)
{
    if(a>1)
    {
        return a*run(a-1);
    }
    else return 1;
}
int main()
{
    ui a;
    cin>>a;

    cout<<run(a)<<endl;
return 0;
}


