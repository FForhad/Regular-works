#include<bits\stdc++.h>
using namespace std;
class Ab
{
    private:
        int x ;
        public:
            Ab( )
            {
                x = 0 ;
                cout <<"\nThe constructor of the class Ab without any argument is invoked " ;
            }
            Ab(int X)
            {
                x = X ;
                cout << "\n The constructor of the class Ab with one argument is  invoked" ;
            }
            void Enter_x(void)
            {
                cout<<"\nEnter the value of x: ";
                cin >> x ;
            }
            void Display_x(void)
            {
                cout << "\n x = " << x ;
            }
};
class B : public Ab
{
    private:
        int y ;
        public:
            B( ) : Ab ( )
            {
                y = 0 ;
                cout <<"\nThe constructor of the class B without any argument is invoked" ;
            }
            B(int X,int Y): Ab(X)
            {
                y = Y ;
                cout <<"\nThe constructor of the class B with two arguments is invoked";
            }
            void Enter_y(void)
            {
                cout <<"\nEnter the value of y: " ;
                cin >> y ;
            }
            void Display_y(void)
            {
                cout <<"\n y = " << y ;
            }
};
int main()
{
    cout <<"\nThe first object b1 is:\n " ;
    B b1 ;
    b1.Enter_x( );
    b1.Enter_y( );
    b1.Display_x( );
    b1.Display_y( );
    cout <<"\nThe second object b2 is:\n " ;
    B b2(7, 8);
    b2.Display_x( );
    b2.Display_y( );
    cout<<"\n";
    return 0;
}

