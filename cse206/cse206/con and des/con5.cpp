#include<iostream>
using namespace std;
class A
{
    protected:
        int x ;
        public:A( )
        {
            x = 0 ;
            cout <<"\nConstructor of class A without any argument is invoked" ;
        }
        A(int X)
        {
            x = X ;
            cout <<"\nConstructor of class A with one argument is invoked" ;
        }
        void Enter_x(void)
        {
            cout <<"\nEnter the value of x: " ;
            cin >> x ;
        }
        void Display_x(void)
        {
            cout <<"\n x = " << x ;
        }
};
class B : public A
{
    protected:
        int y ;
        public:
            B( ) : A( )
            {
                y = 0;
                cout <<"\nConstructor of class B without any argument is invoked" ;
            }
            B( int X,int Y ): A(X)
            {
                y = Y;
                cout <<"\nConstructor of class B with two arguments in invoked" ;
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
class C : public B
{
    private:
        int z ;
        public:
            C( ) : B( )
            {
                z = 0;
                cout <<"\nConstructor of class C without any argument is invoked\n" ;
            }
            C(int X, int Y, int Z): B(X, Y)
                {
                       z = Z ;
                       cout <<"\nConstructor of class C with three arguments is invoked" ;
                }
                void Enter_z(void)
                {
                    cout <<"\nEnter the value of z: " ;
                    cin >> z ;
                }
                void Display_z(void)
                {
                    cout <<"\n z = " << z ;
                }
};
int main()
{
    cout <<"\nThe first object is in use now \n " ;
    C c1 ;
    c1.Enter_x( );
    c1.Enter_y( );
    c1.Enter_z( );
    c1.Display_x( );
    c1.Display_y( );
    c1.Display_z( );
    cout <<"\nThe second object is in use now \n" ;
    C c2(2, 6, 9) ;
    c2.Display_x( );
    c2.Display_y( );
    c2.Display_z( );
    return 0;
}

