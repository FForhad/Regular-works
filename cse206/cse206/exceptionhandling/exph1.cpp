#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            float div = (float)a/b;
            if (div < 0)
                throw 'x';
            cout << "a/b = " << div;
        }
        else
            throw b;
    }
    catch (int x)
    {
        cout << " Division by zero";
    }
    catch (char p)
    {
        cout << " Division is less than 1";
    }
    return 0;
}

