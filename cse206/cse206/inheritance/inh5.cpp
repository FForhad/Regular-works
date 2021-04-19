#include<bits/stdc++.h>
using namespace std;
class Marks
{
public:
    int roll_number;
    string name;
    int marks[100];
    int num_marks;

    void GMarks(int num)
    {
        num_marks = num;
        for (int i = 0; i < num; i++)
            marks[i] = rand() % 5 + 1;
    }

    int sum_of_marks()
    {
        int sum = 0;

        for (int i = 0; i < num_marks; i++)
            sum += marks[i];

        return sum;
    }

    double avarage()
    {
        return round(((double)sum_of_marks() / num_marks) * 100) / 100;
    }

    void set_marks(int number_of_marks, int newmarks)
    {
        marks[number_of_marks] = newmarks;
    }

    int get_marks(int number_of_marks)
    {
        return marks[number_of_marks];
    }

    void set_num_marks(int num)
    {
        num_marks = num;
    }
};
class Physics : public Marks
{
public:
};
class Chemistry : public Marks
{
public:
};
class Mathematics : public Marks
{
public:
};
int main()
{
    int std_num;
    cout << "Enter the number of students: ";
    cin >> std_num;
    Physics phy[std_num];
    Chemistry chem[std_num];
    Mathematics math[std_num];
    int start_id =1;
    for (int i = 0; i < std_num; i++)
    {
        phy[i].roll_number = start_id;
        chem[i].roll_number = start_id;
        math[i].roll_number = start_id++;
        phy[i].GMarks(8);
        chem[i].GMarks(4);
        math[i].GMarks(9);
    }
     cout << "\nThe total marks of  students in Physics, Chemistry and Mathematics: \n";
     for (int i = 0; i < std_num; i++)
    {
        cout << "Roll number of student is " << phy[i].roll_number << endl;
        cout << "The total marks in Physics is " << phy[i].sum_of_marks() << endl;
        cout << "The total marks in Chemistry is " << chem[i].sum_of_marks() << endl;
        cout << "The total marks in Mathematics is " << math[i].sum_of_marks() <<"\n"
         <<endl;
    }
    cout << "\nThe average marks :\n ";
    for (int i = 0; i < std_num; i++)
    {
        cout << "Roll number of student is " << phy[i].roll_number << endl;
        cout << "The average mark in Physics is " << phy[i].avarage() << endl;
        cout << "The average mark in Chemistry is " << chem[i].avarage() << endl;
        cout << "The average mark in Mathematics is " << math[i].avarage() << endl;
        cout << endl;
    }

    return 0;
}

