#include <iostream>
using namespace std;
class Student {
public:
   int rollno;
   static int count;
public:
   Student()
   {
      rollCall();
      rollno=count;
   }
   ~Student()
   {
       --count;
       }
   static void rollCall(void)
   {
      cout <<endl<<"Student Count:" << ++count<< "\n";
   }
};
int Student::count;
int main()
{
   Student stu1;
   cout<<"Student 1: Roll No:"<<stu1.rollno;
   Student stu2;
   cout<<"Student 2: Roll No:"<<stu2.rollno;
   Student stu3;
   cout<<"Student 3: Roll No:"<<stu3.rollno;
   Student stu4;
   cout<<"Student 4: Roll No:"<<stu4.rollno;
   return 0;
}
