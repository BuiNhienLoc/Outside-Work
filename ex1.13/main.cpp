#include <iostream>

using namespace std;

int main()
{
    cout << "Swap two numbers :\n-----------------------\n";
    int a,b,c;
    cout << "Input 1st number: ";
    cin >> a;
    cout << "Input 2nd number: ";
    cin >> b;
    c=a;
    a=b;
    b=c;
    cout << "After swapping the 1st number is: " <<a<<'\n';
    cout << "After swapping the 2nd number is: " <<b<<'\n';
    return 0;
}
