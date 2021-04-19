#include<bits/stdc++.h>
using namespace std;
inline int Floyds_Triangle(int x)
{
    int i, j, n=1;
    for(int i = 0; i < x; i++)
    {
        for(int j=0; j<i; ++j)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }
}
int main()
{
    int x;
    cout<<"Enter the number of rows:";
    cin>>x;
    Floyds_Triangle(x);
    return 0;
}

