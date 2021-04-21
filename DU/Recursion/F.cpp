#include<bits/stdc++.h>
typedef long long int ui;
using namespace std;

ui run(ui a,ui b)
{
    a=abs(a);b=abs(b);
    if(b==0)
    {
        return a;
    }
    else return run(b,a%b);
}

int main()
{
    ui a,b;
    cin>>a>>b;
    cout<<run(b,a);

return 0;
}
