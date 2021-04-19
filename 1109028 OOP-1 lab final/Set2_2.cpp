#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class One{

public:
    int a=10;
    void operator ++()
    {
        a-=5;
    }
    void operator --()
    {
        a+=7;
    }
    void display()
    {
        cout<<a<<endl;
    }
};
int main()
{
    ll a,b,c,d,e,_;
    One demo;
    ++demo;
    --demo;
    demo.display();

return 0;
}
