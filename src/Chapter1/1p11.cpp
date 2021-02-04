#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";       
    int x{ 0 };                                                 // Direct List Initialization of variable 'x'
    std::cin >> x;                                              // Asks user input 'x'
    std::cout << "Double " << x <<  " is: " << x*2 << '\n';     // Output the double of the user input
    std::cout << "Triple " << x <<  " is: " << x*3 << '\n';     // Output the double of the user input

    return 0;
}