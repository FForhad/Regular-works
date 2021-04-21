#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,e=0,d;
    while(cin>>a){
    e=a;
    while(a>=3)
    {
        e += a/3;
        a = a/3 + a%3;
    }
    if(a==2)e++;

    cout<<e<<endl;}
return 0;
}
