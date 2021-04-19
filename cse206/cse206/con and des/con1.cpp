#include<bits\stdc++.h>
using namespace std;
class cube
{
    public:
        double s;
        double vol()
        {
            return(s*s*s);
        }
        cube(double s1)
        {
            cout<<"constructor is called"<< endl;
            s=s1;
        }
        cube()
        {
            cout<<"Default constructor is called "<< endl;
        }
        ~cube()
        {
            cout<<"Destructing "<<s<<endl;
        }
};
int main()
{
    cube c1(3);
    cube c2;
    cout<<"The side of the cube is:"<<c1.s<<"\n" <<endl;
    cout<<"the first cube is:"<<c1.vol()<<"\n"<<endl;
    cout<<"Enter the length of the second cube : " ;
    cin>>c2.s;
    cout<<"The second cube is:"<<c2.vol()<<endl;
    return(0);

}

