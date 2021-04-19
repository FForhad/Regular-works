#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Time
{
    int hour,min,sec;
    public:
    Time()
    {
        hour=0, min=0; sec=0;
    }
    void set_time()
    {
        cout << "\n Enter hour(0-11) ";
        cin >> hour;
        cout << " Enter minute(0-59) ";
        cin >> min;
        cout << " Enter second(0-59) ";
        cin >> sec;
    }
    void display()
    {
        cout<< hour << "-" << min << "-" << sec << endl;
    }

    Time operator+(Time &t);
    friend int operator==(Time &t1, Time &t2);
};

Time Time::operator+(Time &t2)
{
    Time t;
    int a,b;
    a = sec+t2.sec;
    t.sec = a%60;
    b = (a/60)+min+t2.min;
    t.min = b%60;
    t.hour = (b/60)+hour +t2.hour ;
    t.hour = t.hour%12;
    return t;
}

int operator==(Time &t1, Time &t2)
{
    if (t1.hour == t2.hour && t1.min == t2.min && t1.sec == t2.sec )
        return 1;
    return 0;
}
int main()
{
    Time t1,t2,t3;
    cout << "Enter the first time ";
    t1.set_time();
    cout << "\nEnter the second time ";
    t2.set_time();

    cout << "\nFirst time ";
    t1.display();
    cout << "Second time ";
    t2.display();

    t3 = t1 + t2;
    cout << " Sum of times ";
    t3.display();

    if(t1 == t2)
    {
        cout << "*Both the time values are equal";
    }
    else
    {
        cout << "*Both the time values are not equal";
    }
    cout << endl;
    return 0;
}
