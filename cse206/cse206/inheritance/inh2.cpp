#include<bits/stdc++.h>
using namespace std;
class mother
{
public:
    void display()
    {
        cout << "Method of mother class\n";
    }
};
class daughter : public mother
{
public:
    void display()
    {
        cout << "Method of daughter class\n";
    }
};

int main()
{
    daughter Fahamida;
    Fahamida.display();
    return 0;
}

