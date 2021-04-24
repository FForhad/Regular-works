#include<bits/stdc++.h>
using namespace std;

int run(int _)
{
    if(_==0)
    {
        return 0;
    }
    if(_==1)
    {
        return 1;
    }

    return run(_-1)+run(_-2);

}
int main()
{
    int a,_;
    cin>>_;
    cout<<run(_)<<endl;
return 0;
}


