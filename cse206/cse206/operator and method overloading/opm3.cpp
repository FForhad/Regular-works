#include <bits/stdc++.h>
using namespace std;

int manip (int, int);
float manip (float, float);
int main ()
{
    int x = 3;
    int y = 7;
    int z;
    float a = 6.8;
    float b = 13.6;
    int c;
    z = manip (x,y);
    c = manip (a,b);
    cout << z << endl << c << endl;
}
int manip (int num1, int num2)
{
    return (num1 * num2);
}
float manip (float num1, float num2)
{
    return (num1 / num2);
}

/// value 0 ase kn

