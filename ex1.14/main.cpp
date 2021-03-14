#include <iostream>

using namespace std;

class sphere
{
    private:
        int radius = 1;
    public:
        sphere(int radius)
        {
            this->radius = radius;
        }

        float computeVolume()
        {
            return((4*3.14*(this->radius*this->radius*this->radius))/3);
        }
};
int main()
{
    int a;
    float volume;
    cout << "Calculate the volume of a sphere :\n---------------------------------------\nInput the radius of a sphere: ";
    cin >> a;
    sphere nope(a);
    volume=nope.computeVolume();
    cout << "The volume of a sphere is: " << volume << '\n';
    return 0;
}
