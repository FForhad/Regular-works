#include <bits/stdc++.h>
using namespace std;
int main()
{
    int inp[50],out[50], c, i;
    cout << "Enter number of elements in array: ";
    cin >> c;
    cout << "Enter " << c << " numbers: ";
    for(i = 0; i < c; i++)
        {
            cin >> inp[i];
        }
    for(i = 0; i < c; i++)
        {
          out[i] = inp[c-i-1];
        }

    cout << "Reversed Array: ";
    for(i = 0; i < c; i++)
        {
          cout << out[i] << " ";
       }
    return 0;
}
