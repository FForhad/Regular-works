#include<bits/stdc++.h>
typedef int ui;
using namespace std;

ui run(ui a,ui b)
{
    if(a==b || b==0)
    {
        return 1;
    }
    if(a<b)return 0;

    return run(a-1,b-1)+run(a-1,b);
}

int main()
{
    ui a,b;
    cin>>a>>b;

    cout<<run(a,b)<<endl;
return 0;
}



