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
ll x[190000],y[199900];


///--------------------**********----------------------------------
bool isprime(ll num){
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
void SieveOfEratosthenes(ll n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    ll j=0,c;
    for (ll p = 2; p <= n; p++)
        if (prime[p])
        {
            cout<<p<<" ";

        }
}


int sieve_of_eratosthenes(ll **primes, const ll max) {
	// Allocate memory
	ll *isPrime = (ll *)malloc(sizeof(ll) * (max + 1));
	int i;
	// Assume all numbers to be prime initially
	for(i = 0; i <= max; ++i)
		isPrime[i] = 1;
	// 0 and 1 are not prime
	isPrime[0] = 0;
	isPrime[1] = 0;
	// Maintain a count of primes as we encounter them
	ll count = 0;
	// We need a count of all primes as we move
	// This means we cannot iterate to root(max)
	for(i = 2; i <= max; ++i)
	{
		if(isPrime[i] == 1)
		{
			++count;
			ll j;
			// Set all multiples of i as not prime
			for(j = 2 * i; j <= max; j += i)
				isPrime[j] = 0;
		}
	}
	*primes = (ll *)malloc(sizeof(ll) * count);
	ll j = 0;
	for(i = 0; i <= max; ++i)
	{
		if(isPrime[i] == 1)
		{
			(*primes)[j++] = i;
		}
	}
	return count;
}



ll Digitsum(ll n)
{
    ll e=0;
    while(n>0)
    {
        int p=n%10;
        e+=p;
        n=n/10;
    }
    return e;
}


int main()
{
    fforhad;

    ll c=0,_,d=0,e=0,f=0,k=0,l,j=0,m,i,a,b;
    string s,p,t;
    char ch,ss[100];
    m=100;
    ll n = 100;
	ll *primes = NULL;
	ll w = sieve_of_eratosthenes(&primes, n);
	printf("Primes up to %d are:\n", n);
	for(i = 0; i < w; ++i)
	{
		printf("%d\n", primes[i]);
	}



/*
    cin>>_;
    while(_--)
    {
        e=0;
        cin>>a>>b>>c;
        for(i=0;i<=c;i++)
        {
            if(gcd(a+i,b+i)==1)
                e++;
        }n++;

        cout<<Case <<n<<":"<< e<<endl;
    }*/

return 0;

}











