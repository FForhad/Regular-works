#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main()
{
    ld a,b,c,d,e=0,_;
    cin>>a>>b;
    try
    {
        if (b!=0)
            throw b;
    }
    catch(ld b)
    {
        cout << "The velocity is :"<<a/b<< endl; return 0;
    }

    cout << "time is zero here." << endl;

return 0;

}
