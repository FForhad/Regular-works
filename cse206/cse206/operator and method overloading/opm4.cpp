#include <iostream>

#include <vector>

using namespace std;

//defining the class shape to overload the method area() on the basis of number of parameters.
class shape {

    //declaring member variables
    public:
        int l, b, s;

    //defining member function or methods
    public:
        void input() {
            cout << "Enter the length of each side of the Square: \n";
            cin >> s;
            cout << "\n";
            cout << "Enter the length and breadth of the Rectangle: \n";
            cin >> l >> b;
            cout << "\n";
        }

    //Demonstrating Method Overloading
    public:
        void area(int side) {
            cout << "Area of Square = " << side * side;
            cout << "\n";
        }

    void area(int length, int breadth) {
        cout << "Area of Rectangle = " << length * breadth;
        cout << "\n";
    }
};

//Defining the main method to access the members of the class
int main() {
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to demonstrate Method Overloading in a Class, in CPP  ===== \n\n";

    //Declaring class object to access class members from outside the class
    shape sh;

    cout << "\nCalling the input() function to take the values from the user\n";
    sh.input();

    cout << "\nCalling the area(int) function to calculate the area of the Square\n";
    sh.area(sh.s);

    cout << "\nCalling the area(int,int) function to calculate the area of the Rectangle\n";
    sh.area(sh.l, sh.b);

    cout << "\nExiting the main() method\n\n\n";

    return 0;
}

