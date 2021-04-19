#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Parent_class{
public:
    void parent_method()
    {
        cout<<"This is parent class"<<endl;
    }
};

class Child_class: public Parent_class{
public:
    void child_method()
    {
        cout<<"This is child class"<<endl;
    }
};

int main()
{
    Parent_class p;
    Child_class C;
    p.parent_method();
    C.child_method();
    C.parent_method();
return 0;
}
