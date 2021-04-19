#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define fr(i,a) for(ll i=0;i<a;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
using namespace std;

class ZooAnimal
{
private:
    char *name;
    int cageNumber;
    int weightDate=5;
    int weight;
public:
    void operator ==(int a)
    {

        if(weightDate == a)
            yes;
        else
            no;
    }
};
int main()
{
    ZooAnimal five;
    //One demo;
    ==five(5);
    //--five;
}
