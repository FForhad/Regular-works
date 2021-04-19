#include<bits\stdc++.h>
using namespace std;
class Test
{
    public:
        int l, w, area;
        Test(int length, int width)
        {
            l = length;
            w = width;
        }
        void findArea()
        {
            area =l * w;
        }
        void display()
        {
            cout << "Area of rectangle is:" << area;
        }
};
int main()
{
    int length, width;
    cout << "Enter length of rectangle:";
    cin >> length;
    cout << "Enter width of rectangle:";
    cin>>width;
    Test obj(length, width);
    obj.findArea();
    obj.display();
    return 0;
}
