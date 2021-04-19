#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Rectangle{

public:
    int l,b;
    Rectangle(int x,int y)
    {
        l=x;b=y;
    }

    void Area()
    {
        cout<<"Area is :"<<l*b<<endl;
    }
    void Perimeter()
    {
        cout<<"Perimeter is :"<<2*(l+b)<<endl;
    }

};

class Square:public Rectangle{

public:
    int l;
    Square(int x):Rectangle(x,x)
    {
        l=x;
    }

};

int main()
{
    int a,b,c,d,e,_;
    cin>>a>>b;
    Rectangle alif(a,b);
    Square Zerin(a);
    alif.Area();
    alif.Perimeter();
    Zerin.Area();
    Zerin.Perimeter();


}

