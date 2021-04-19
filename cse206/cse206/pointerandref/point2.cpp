#include<iostream>
using namespace std;
int main() {
   int x[10], i, y = 0;
   int *ptr;
   cout << "Enter the Numbers: ";
   for (i = 0; i < 10; i++) {
      cin >> x[i];
   }
   ptr = x;
   for (i = 0; i < 10; i++) {
      y = y + *(ptr + i);
   }
cout << "Sum of Elements in Array: " << y;
return 0;
}

