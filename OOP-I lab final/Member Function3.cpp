#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class MyClass
{
      static int count;
public:
      MyClass()
      {
         count++;
      }
      static int objCount()
      {
         return count;
      }
};
int MyClass::count;
int main()
{
   MyClass obj1, obj2, obj3,i;
   int cnt;
   cnt = MyClass::objCount();
   cout << "Number of objects:" << cnt;
return 0;
}
