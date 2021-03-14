#include <iostream>

using namespace std;

class cylinder
{
    private:
        int radius = 1;
        int height = 1;
    public:
        cylinder(int radius, int height)
        {
            this->radius = radius;
            this->height = height;
        }

        float computeVolume()
        {
            return(3.14*this->radius*this->radius*height);
        }
};
int main()
{
    int a,b;
    float volume;
    cout << "Calculate the volume of a cylinder:\n---------------------------------------\nInput the radius of the cylinder: ";
    cin >> a;
    cout << "Input the height of the cylinder: ";
    cin >> b;
    cylinder nope(a,b);
    volume=nope.computeVolume();
    cout << "The volume of a cylinder is: " << volume << '\n';
    return 0;
}
