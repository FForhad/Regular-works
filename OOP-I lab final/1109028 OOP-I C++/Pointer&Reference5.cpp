#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main()
{
    char s[1000];
    cin>>s;
    char *ptr = s;
    ll a=0;
    while(*(ptr++)!='\0')
    {
        a++;
    }
    cout<<a<<endl;
}
