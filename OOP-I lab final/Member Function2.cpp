#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Myclass
{
private:
    ll n;
public:
    Myclass()
    {
        printf("Enter the number: ");
        scanf("%d",&n);
    }
friend void revNum();
};

void revNum()
{
    ll rem,num,x;
    Myclass obj;
    x = obj.n;
    while(x != 0)
    {
        rem = x%10;
        num = num*10 + rem;
        x /= 10;
    }
    cout<<"Reversed Number : "<<num;
}
int main()
{
    revNum();
return 0;
}
