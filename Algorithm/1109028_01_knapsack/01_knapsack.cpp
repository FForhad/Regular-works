#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

ll Knapsack(ll b,ll y[],ll x[], ll n)
{ ///"X" for profit & "Y" for weight
    if(n==0 || b==0)
    {
        return 0;
    }
    if(y[n-1]>b)
    {
        return Knapsack(b,y,x,n-1);
    }
    else
    {
        return max(x[n-1]+Knapsack(b-y[n-1],y,x,n-1),Knapsack(b,y,x,n-1));
    }
}

int main()
{

    ifstream inFile;
    inFile.open("input_Knapsack.txt");

    if(inFile.fail())
    {
        cout<<"Error Opening File"<<endl;
        exit(1);
    }


    ll a,c,d,n,i,b;
    cin>>n>>b;///item number and weight;
    inFile>>n>>b;

    ll x[n],y[n],z[n];

    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];///profit and weight input;
        inFile>>x[i]>>y[i];
    }
    cout<<Knapsack(b,y,x,n)<<endl;
    ofstream outFile;
    outFile.open("output_Knapsack.txt");
    outFile<<Knapsack(b,y,x,n)<<endl;

return 0;
}

