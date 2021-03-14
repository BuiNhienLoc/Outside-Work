#include <iostream>

using namespace std;

class rectangle
{
    private:
        int length = 1;
        int width = 1;
    public:
        rectangle(int length, int width)
        {
            this->length = length;
            this->width = width;
        }
        float computeArea()
        {
            return(this->length*this->width);
        }
        float computePerimeter()
        {
            return((this->length+this->width)*2);
        }
};
int main()
{
    int a,b;
    float perimeter,area;
    cout << "Find the Area and Perimeter of a Rectangle :\n---------------------------------------\nInput the length of the rectangle : ";
    cin >> a;
    cout << "Input the width of the rectangle : ";
    cin >> b;
    rectangle nope(a,b);
    perimeter=nope.computePerimeter();
    area=nope.computeArea();
    cout << "The area of the rectangle is : " << area << '\n';
    cout << "The perimeter of the rectangle is : " << perimeter << '\n';
    return 0;
}
