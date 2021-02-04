#include <iostream>
#include <cstdlib>  // just for practice

int main()
{
    int x{}, y{}, z{};
    x = 5 - -1; 
    std::cout << x << '\n';

    y = 4;
    y+=1;
    std::cout << "x / y = " << x/y << '\n';     //integer division
    std::cout << "double(x)/y = " << static_cast<double>(x)/y << '\n';  // static cast


    return EXIT_SUCCESS;


}