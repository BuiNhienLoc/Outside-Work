#include <iostream>

int main()
{
    int n = 57;
    std::cout << "Display the operation of pre and post increment and decrement :\n";
    std::cout << "--------------------------------------------------------------------\n";
    std::cout << "The number is : " << n << '\n';n++;
    std::cout << "After post increment by 1 the number is: " << n << '\n';n+=1;
    std::cout << "After pre increment by 1 the number is : " << n << '\n';n=n+1;
    std::cout << "After increasing by 1 the number is : " << n << '\n';n--;
    std::cout << "After post decrement by 1 the number is : " << n << '\n';n-=1;
    std::cout << "After pre decrement by 1 the number is : " << n << '\n';n=n-1;
    std::cout << "After decreasing by 1 the number is : " << n << '\n';
    return 0;
}
