#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Mother{

public:
    void display()
    {
        cout<<"mother function"<<endl;
    }

};

class Dauther:public Mother{

public:
    void display()
    {
        cout<<"Dauther function"<<endl;
    }
};

int main()
{
    ll a,b,c,d,e,_;
    Dauther zerin;
    zerin.display();

}

