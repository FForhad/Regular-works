#include<bits/stdc++.h>
typedef unsigned long long int ui;
using namespace std;

ui isVowel(char s)
{
    if(s=='a'|| s=='e'|| s=='i'|| s=='o'|| s=='u'||s=='A'|| s=='E'|| s=='I'|| s=='O'|| s=='U')
        return 1;
    else
        return 0;
}
ui run(string s,ui a)
{
    if(a==1)return isVowel(s[0]);

    return run(s,a-1)+isVowel(s[a-1]);
}
void solve()
{
    ui a;
    string s;
    getline(cin,s);
    a=s.size();
    cout<<run(s,a);
    cout<<endl;
}
int main()
{
    ui _=1;
    //cin>>_;
    while(_--)
        {
            solve();
        }
return 0;
}


