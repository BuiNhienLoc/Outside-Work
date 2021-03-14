#include <iostream>

using namespace std;

class cube
{
    private:
        int side = 1;
    public:
        cube(int side)
        {
            this->side = side;
        }

        float computeVolume()
        {
            return(this->side*this->side*this->side);
        }
};
int main()
{
    int a;
    float volume;
    cout << "Calculate the volume of a cube :\n---------------------------------------\nInput the radius of a sphere: ";
    cin >> a;
    cube nope(a);
    volume=nope.computeVolume();
    cout << "The volume of a cube is: " << volume << '\n';
    return 0;
}
