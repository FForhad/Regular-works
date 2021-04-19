#include<bits\stdc++.h>
using namespace std;
class A
{
    private:
        int n,i;
        public:
            A()
            {
                cout<<"Enter Number to Display reverse: ";
                cin>>n;
            }
            friend void show(A);
};
void show(A r)
{
    cout<<"The reverse the Entered number: ";
    for(r.i=r.n; r.i>0; r.i=r.i/10)
        {
            cout<<r.i%10;
        }
}
int main()
{
    A r;
    show(r);
}
