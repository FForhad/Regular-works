#include<bits\stdc++.h>
using namespace std;
class AreaOfCircle
{
    int radius;
    public:
        void get()
        {
            cout << "Enter the radius of Circle : ";
            cin >> radius;
        }
        friend float calculate(AreaOfCircle ob);
};
float calculate(AreaOfCircle ob)
{
    return 3.14 * ob.radius * ob.radius;
}
int main()
{
    AreaOfCircle object;
    object.get();
    cout<<"\nArea of Circle : "<<calculate(object);
}

