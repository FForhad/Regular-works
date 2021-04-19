#include<bits/stdc++.h>
using namespace std;
class parent_class
{
public:
    void parent_method()
    {
        cout << "This is parent class" << endl;
    }
};
class child_class : public parent_class
{
public:
    void child_method()
    {
        cout << "This is child class" << endl;
    }
};
int main()
{
    parent_class p;
    child_class c;
    p.parent_method();
    c.child_method();
    c.parent_method();
}

