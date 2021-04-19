#include<bits/stdc++.h>
using namespace std;
int swapNumbers(int *x,int *y,int *z);
int main()
{
    int e1,e2,e3;
    cout<<"enter the element: ";
    cin>>e1>>e2>>e3;
    cout<<"value before swapping are :\n";
    cout<<"e1,e2 and e3 elements are: " << e1 << ", " << e2 << ", " << e3 <<"\n"<< endl;
    swapNumbers(&e1,&e2,&e3);
    cout<<"value after swapping are :\n";
    cout<<"e1,e2 and e3 elements are: " << e1 << ", " << e2 << ", " << e3 <<"\n"<< endl;
    return 0;
    }
    int swapNumbers(int *x,int *y,int *z)
    {
      int tmp;
      tmp=*y;
      *y=*x;
      *x=*z;
      *z=tmp;
}
