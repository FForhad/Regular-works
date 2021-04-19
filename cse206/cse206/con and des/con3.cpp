#include<bits\stdc++.h>
using namespace std;
class student
{
    private:
        char name[50],add[50];
        int roll;
        public:
            student ();
            ~student();
            int read();
            int disp();
};
student :: student()
{
    cout<<"Student Details called by constructor"<<endl;
}
int student :: read()
{
    cout<<"Enter the student Name:";
    cin>>name;
    cout<<"Enter the student roll no: ";
    cin>>roll;
    cout<<"Enter the student address: ";
    cin>>add;
}
int student :: disp()
{
    cout<<"\nStudent Details shown below:\n";
    cout<<"Student Name: "<<name<<endl;
    cout<<"Roll no: "<<roll<<endl;
    cout<<"Address: "<<add<<endl;

}
student:: ~student()
{
        cout<<"Student Detail is Closed.\n";
}
int main()
{
    student s;
    s.read ();
    s.disp ();
    return 0;
}
