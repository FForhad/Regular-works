#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main()
{
    ll a,b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            ld div = (ld)a/b;
            if (div < 0)
                throw "funny";
            cout << "a/b = " << div;
        }
        else
            throw b;
    }
    catch (ll e)
    {
        cout << "Exception: Division by zero";
    }
    catch (string s)
    {
        cout << "Exception: Division is less than 1";
    }
    return 0;
}
