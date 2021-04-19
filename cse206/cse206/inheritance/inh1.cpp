#include<bits/stdc++.h>
using namespace std;
class person
{
	public:
	static	string name;
		person()
		 {
		     name = "Kamal Hossain";
         }
};

class employee:public person
{
	private:
		string employeeName;
		int JoiningYear;
		double AnnualSalary;
		string nationalInsurNum;
	public:
	    employee(string emp_name,int YrOf_Joining,double annual_salary,string nationalInsurNo)
	    {
	        employeeName = emp_name;
	        JoiningYear = YrOf_Joining;
	        AnnualSalary = annual_salary;
	        nationalInsurNum= nationalInsurNo;
        }
        void print()
        {
		cout<<"employee Name = "<<employeeName<<endl;
		cout<<"Joining Year = "<<JoiningYear<<endl;
		cout<<"Annual Salary = "<<AnnualSalary<<endl;
		cout<<"National Insurance Number = "<<nationalInsurNum<<endl;
		}
};
string person::name;
int main()
{
person p1;
string Name = person::name;
employee e1(Name,2005,655378.33,"9th4kmym2");
e1.print();
return 0;
}

