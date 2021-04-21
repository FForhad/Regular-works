/**
                    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
                ;;;;;;;;;;;;;      ;;;;    ;;;;    ;;;; ;;; ;;;;   ;;;;    ;;;;;;;;;;;
            ;;;;;;;;;;;;;;;;; ;;;;;;;; ;;;; ;;; ;;; ;;; ;;; ;;; ;;; ;;; ;;; ;;;;;;;;;;;;;;
        ;;;;;;;;;;;;;;;;;;;;;    ;;;;; ;;;; ;;;    ;;;;     ;;;     ;;; ;;; ;;;;;;;;;;;;;;;;;;
            ;;;;;;;;;;;;;;;;; ;;;;;;;; ;;;; ;;; ;; ;;;; ;;; ;;; ;;; ;;; ;;; ;;;;;;;;;;;;;;
                ;;;;;;;;;;;;; ;;;;;;;;;    ;;;; ;;;  ;; ;;; ;;; ;;; ;;;    ;;;;;;;;;;;
                    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
*/

#include<bits/stdc++.h>
using namespace std;

#define          fforhad                ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define          ll                     long long int
#define          ld                     long double
#define          u                      unsigned long long
#define          ff                     first
#define          sec                    second
#define          pb                     push_back
#define          eb                     emplace_back
#define          sc                     scanf
#define          pf                     printf
#define          scin(x)                scanf("%d",&(x))
#define          scin2(x,y)             scanf("%d %d",&(x),&(y))
#define          scin3(x,y,z)           scanf("%d %d %d",&(x),&(y),&(z))
#define          scln(x)                scanf("%lld",&(x))
#define          scln2(x,y)             scanf("%lld %lld",&(x),&(y))
#define          scln3(x,y,z)           scanf("%lld %lld %lld",&(x),&(y),&(z))
#define          min3(a,b,c)            min(a,min(b,c))
#define          min4(a,b,c,d)          min(d,min(a,min(b,c)))
#define          max3(a,b,c)            max(a,max(b,c))
#define          max4(a,b,c,d)          max(d,max(a,max(b,c)))
#define          ms(a,b)                memset(a,b,sizeof(a))
#define          gcd(a,b)               __gcd(a,b)
#define          lcm(a,b)               ((a)*(b)/gcd(a,b))
#define          PI                     acos(-1.0)
#define          zero(a)                memset(a,0,sizeof a)
#define          all(v)                 v.begin(),v.end()
#define          Max(v)                 *max_element(all(v))
#define          Min(v)                 *min_element(all(v))
#define          Upper(c,x)             (upper_bound(c.begin(),c.end(),x)-c.begin())
#define          Lower(c,x)             (lower_bound(c.begin(),c.end(),x)-c.begin())
#define          Unique(X)              (X).erase(unique(all(X)),(X).end())
#define          no                     cout << "NO" << endl ;
#define          yes                    cout << "YES" << endl ;
#define          Count(C, x)            count(C.begin(), C.end(), x)
#define          fs(x)                  fixed<<setprecision(x)
#define          print(x)               for(auto i: x) { cout << i << " "; }



///--------------------**********----------------------------------
bool isPrime(ll num){
    bool flag=true;
    for(ll i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}

ll OcD(ll n)
{
    ll x = 0;
    ll base = 1;
    ll t = n;
    while(t!=0)
    {
        ll xp=t%10;
        t= t/10;
        x+=xp*base;
        base=base*8;
    }
    return x;
}
ll DcO(ll n) {
    int remainder;
    long octal = 0, i = 1;

    while(n != 0) {
        remainder = n%8;
        n = n/8;
        octal = octal + (remainder*i);
        i = i*10;
    }
    return octal;
}
ll DropLeadingDigit(ll number){return(number % (ll) pow((ld) 10, (ld) floor(log((ld) number) / log((ld) 10))));}
ll remove_leftmost_digit(ll n)
{
    static char temp[11];
    sprintf(temp, "%d", n);
    return atoi(temp+1);
}
void Remove(char str[],ll n)
{
    set<char> s(str,str+n-1);//create a set excluding '/0'
    //print the contents of set
    for(set<char>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it;
    }
}
//ll n=988244353;
//bool prime[n+1];
void SieveOfEratosthenes(ll b)
{
    ll n=10000;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (ll i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


    // Print all prime numbers
    for (int p=2; p<=n; p++)
       if (prime[p] && (p*p + 4*p +3)%b==0)
          {cout << p <<endl;break; }
}
int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}
bool isPalRec(string s,
              int a, int e)
{

    // If there is only one character
    if (a == e)
    return true;

    // If first and last
    // characters do not match
    if (s[a] != s[e])
    return false;

    // If there are more than
    // two characters, check if
    // middle substring is also
    // palindrome or not.
    if (a < e + 1)
    return isPalRec(s, a + 1, e - 1);

    return true;
}
bool isPali(string s)
{
    int n = s.size();

    // An empty string is
    // considered as palindrome
    if (n == 0)
        return true;

    return isPalRec(s, 0, n - 1);
}
int digitsum(int n)
{
    int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
}
int main()
{
    fforhad;

    ll _,c,d,e=0,f=0,n,k=1,l,x[10000],y[10000],a,b;
    string s,p,t;
    char ch,ss[100];

    cin>>_;
    while(_--)
    {
        f=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++)
        {
            if(i%2!=0)
            {
                f+=i;
            }
        }
        cout<<"Case "<<k<<": "<<f<<endl;k++;

    }


return 0;

}
