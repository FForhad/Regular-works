#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Country
{
public:
    void Country_method()
    {
        cout<<"Country class"<<endl;
    }
};
class State : public Country
{
public:
    void State_method()
    {
        cout<<"State class."<<endl;
    }
};
class Division_A : public State
{
    public:
    void Division_A_method()
    {
        cout<<"Division A class."<<endl;
    }
};
class Division_B : public State
{
public:
    void Division_B_method()
    {
        cout<<"Division B class."<<endl;
    }
};
class Upazilla_C : public Division_A, public Division_B
{
public:
    void Upazilla_C_method()
    {
        Division_A_method();
        Division_B_method();
        cout<<"Upazilla C class."<<endl;
    }
};
int main()
{
    ll a,b,c,d,e=0,_;

    Upazilla_C Akua;
    Akua.Upazilla_C_method();

return 0;
}
