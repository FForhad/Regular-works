#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class A
{
private:
    ll x ;
public:
    A()
    {
        x = 0 ;
        cout<< "\nThe constructor of the class A without any argument is  invoked" ;
    }
    A(ll X)
    {
        x = X ;
        cout<< "\nThe constructor of the class A with one argument is  invoked" ;
    }
    void Enter_x(void)
    {
        cout<< "\nEnter the value of x: ";  cin>>x ;
    }
    void Display_x(void)
    {
        cout<< "\nx = "<<x;
    }
};
class B : public A
{
private:
    ll y ;
public:
    B():A()
    {
        y = 0 ;
        cout<<"\nThe constructor of the class B without any argument is  invoked" ;
    }

    B(ll X,ll Y):A(X)
    {
        y=Y;
        cout << "\nThe constructor of the class B with two arguments is invoked" ;
    }
    void Enter_y(void)
    {
        cout << "\nEnter the value of y: " ; cin >> y ;
    }
    void Display_y(void)
    {
        cout << "\ny = " << y ;
    }
};

class C: public B
{
private:
    ll z ;
public:
    C():B()
    {
        z = 0 ;
        cout<<"\nThe constructor of the class C without any argument is  invoked" ;
    }

    C(ll X,ll Y,ll Z):B(X,Y)
    {
        z=Z;
        cout << "\nThe constructor of the class C with two arguments is invoked" ;
    }
    void Enter_z(void)
    {
        cout << "\nEnter the value of z: " ; cin >> z ;
    }
    void Display_z(void)
    {
        cout << "\nz = " << z;
    }
};



int main()
{
    cout<<"\nThe first object b1 is in use\n " ;
    C b1 ;
    b1.Enter_x();
    b1.Enter_y();
    b1.Enter_z();
    b1.Display_x();
    b1.Display_y();
    b1.Display_z();
    cout<<"\nThe second object b2 is in use\n " ;
    C b2(5,6,7);
    b2.Display_x();
    b2.Display_y();
    b2.Display_z();
    cout<<"\n";

return 0;
}
