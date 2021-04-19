#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Person{
public:
    string Emp_name;
    void Emp_nam()
    {
        cin>>Emp_name;
    }


};
class Employee:public Person{

public:
    double Emp_sal;
    int Emp_strt_yr;
    string Emp_insu;

    void Import()
    {
        cin>>Emp_sal>>Emp_strt_yr>>Emp_insu;
    }

    void Display()
    {
        cout<<Emp_name<<endl;
        cout<<Emp_sal<<endl;
        cout<<Emp_strt_yr<<endl;
        cout<<Emp_insu<<endl;
    }

};

int main()
{
    Employee ami;
    freopen("Inheritance1.txt","r",stdin);
    ami.Emp_nam();
    ami.Import();
    ami.Display();

}
