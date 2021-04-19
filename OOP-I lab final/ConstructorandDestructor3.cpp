#include<bits/stdc++.h>
typedef long long int ll;
typedef long double ld;
using namespace std;

class Student{
private:
    char name[20],add[20];
    ll roll,zip;
public:
    Student();
    ~Student();
    void read();
    void display();
};
Student::Student()
{
    cout<<"This is Student Details constructor called..........."<<endl;
}
void Student :: read()
{
    cout<<"Enter the student Name : ";
    cin>>name;
    cout<<"Enter the student roll no : ";
    cin>>roll;
    cout<<"Enter the student address : ";
    cin>>add;
    cout<<"Enter the Zipcode : ";
    cin>>zip;
}
void Student :: display()
{
    cout<<"\nThe Entered Student Details are shown below ::---------- \n";
    cout<<"Student Name : "<<name<<endl;
    cout<<"Roll no   is : "<<roll<<endl;
    cout<<"Address is : "<<add<<endl;
    cout<<"Zipcode is : "<<zip;
}
Student :: ~Student()
{
        cout<<"\n\nStudent Detail is Closed.............\n";
}
int main()
{
    Student s;
    s.read();
    s.display();

return 0;
}
