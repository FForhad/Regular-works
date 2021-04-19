#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main()
{
    ll wait_time = 46;
    try
    {
        cout << "Try block entered.\n";
        if (wait_time > 30)
            throw wait_time;
        cout << "Leaving try block.\n";
    }
    catch(ll thrown_value)
    {
        cout << "Exception thrown with\n"
             << "wait_time equal to " << thrown_value << endl;
    }
    cout << "After catch block." << endl;
    return 0;
}

