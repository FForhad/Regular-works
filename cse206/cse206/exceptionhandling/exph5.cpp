#include<iostream>
#include<string>
using namespace std;
int main()
{
     float num1, num2, ans;
     char Operator;
     try
     {
          cout<<"Enter First Number:  ";
          cin>>num1;
          if(num1==0)
               throw 0;
          cout<<"Enter Operator:  ";
          cin>>Operator;
          if(Operator != '+' && Operator != '-' &&Operator != '*' && Operator != '/')
          throw Operator;
          cout<<"Enter Second Number  :  ";
          cin>>num2;
          switch(Operator)
          {
               case '+':
                    ans = num1 + num2;
                    break;
               case '-':
                    ans = num1 - num2;
                    break;
               case '*':
                    ans = num1 * num2;
                    break;
               case '/':
                    ans = num1 / num2;
                    break;
          }
          if(num2 == 0)
               throw 0;
          cout<<"\n Ans: "<<num1<<" "<<Operator<<" "<<num2<<" = "<<ans;
     }
     catch(const char c)
     {
          cout<<"Operator : "<<c<<" is not a Valid Operator";
     }
     catch(const int n)
     {
          cout<<"\n Error";
     }
     return 0;
}

