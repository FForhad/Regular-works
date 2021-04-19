#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
#define fr(i,a) for(ll i=0;i<a;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
using namespace std;

class shape {

public:
        ll l, b, s;
public:
    void input(){
        cout << "Enter the length of each side of the Square: \n";
        cin >> s;
        cout << "\n";
        cout << "Enter the length and breadth of the Rectangle: \n";
        cin >> l >> b;
        cout << "\n";
        }
public:
    void area(ll a){
        cout << "Area of Square = " <<a*a;
        cout << "\n";
        }

    void area(ll l, ll b){
        cout << "Area of Rectangle = " << l*b;
        cout << "\n";
     }
};

int main() {
    shape sh;
    sh.input();
    sh.area(sh.s);
    sh.area(sh.l, sh.b);

return 0;
}
