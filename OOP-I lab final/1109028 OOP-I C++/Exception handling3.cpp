#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main()
{
    ll h,m;
    char ch;
    while(1)
    {
        cout<<"Enter time in 24-hour notation(hour : minute):"<<endl;
        cin>>h>>ch>>m;
        try
        {
            if((h<0 || h>23)||(m<0 || m>59))
                throw 'e';
            else
            {
                cout<<"That is the same as"<<endl;
                if(h==0)
                    h=12;
                else if(h>12)
                    h-=12;
                cout<<h<<":"<<m<<endl;
            }

        }
        catch(char e)
        {
            cout<<"Enter the correct time"<<endl;
            continue;
        }
        cout << "Again?(y/n)" << endl;
        cin >> ch;
        if(ch=='y' || ch=='Y')
            continue;
        else
            return 0;
    }
}
