#include <iostream>
#include <math.h>

using namespace std;

class triangle
{
    private:
        int a = 1;
        int b = 1;
        int c = 1;
    public:
        triangle(int a, int b, int c)
        {
            this->a = a;
            this->b = b;
            this->c = c;
        }

        float computeArea()
        {
            float p;
            p=this->a+this->b+this->c;
            return(sqrt(p/2*(p/2-this->a)*(p/2-this->b)*(p/2-this->c)));
        }
};
int main()
{
    int a,b,c;
    float area;
    cout << "Find the area of any triangle using Heron's Formula :\n---------------------------------------\nInput the length of 1st side of the triangle : ";
    cin >> a;
    cout << "Input the length of 2nd side of the triangle : ";
    cin >> b;
    cout << "Input the length of 1st side of the triangle : ";
    cin >> c;
    triangle nope(a,b,c);
    area=nope.computeArea();
    cout << "The area of the triangle is: " << area << '\n';
    return 0;
}
