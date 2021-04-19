#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

int main()
{
     ll a, b, e;
     char Operator;

     cout<<"\n Perform Arithmetic Operations on Two Numbers";
     cout<<"\n --------------------------------------------";

     try
     {
          cout<<"\n Enter First Number   :  ";
          cin>>a;
          if(a==0)
               throw 0;
          cout<<"\n Enter Operator       :  ";
          cin>>Operator;
          if(Operator != '+' && Operator != '-' &&
               Operator != '*' && Operator != '/')
          throw Operator;
          cout<<"\n Enter Second Number  :  ";
          cin>>b;
          cout<<endl;
          switch(Operator)
          {
               case '+':
                    e = a + b;
                    break;
               case '-':
                    e = a - b;
                    break;
               case '*':
                    e = a * b;
                    break;
               case '/':
                    e = a / b;
                    break;
          }
          if(b == 0)
               throw 0;
          cout<<"\n ewer : "<<a<<" "<<Operator<<" "<<b<<" = "<<e;
     }
     catch(char c)
     {
          cout<<"\n Exception Caught... \n Bad Operator : "<<c<<" is not a Valid Operator";
     }
     catch(ll n)
     {
          cout<<"\n Error : Bad Operation...";
     }
return 0;
}
