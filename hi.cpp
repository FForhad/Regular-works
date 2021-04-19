#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,i,j,k=2,x[100][100],y[100],z[100];


    cout<<"Enter the number of vertices : ";
    cin>>a;
    cout<<endl;

    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            cin>>x[i][j];
        }
    }
    cout<<"Enter the starting vertex : ";
    cin>>b;
    cout<<endl;

    z[1]=b;

    for(i=b;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
            if(x[i][j]==1)
            {
                if(binary_search(z,z+k,j))
                    ;
                else
                {
                    z[k]=j;k++;
                }
            }
        }
    }

    for(i=1;i<=a;i++)
    {
        cout<<z[i]<<" ";
    }
    cout<<endl;



return 0;
}
/**
vertex x
input array of x*x;
starting vertex of x*x;
print visited vertex;

0 1 1 1 1
1 0 1 1 1
1 1 0 1 1
1 1 1 0 1
1 1 1 1 0

*/
