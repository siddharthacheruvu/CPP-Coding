#include <iostream>
#define DEBUG
#define NAME "Siddhartha"   // Symbolic constant using object-like macros with a substitution variable
#include "myconstants.h"
#include <math.h>

int main()
{
    // constexpr double gravity {9.81};    // acc. due to gravity - constant

    std::cout << constants::gravity << '\n';
    // // RANDOM PRACTICE 'CAUSE I REMEMBERED IT 
    // #ifdef DEBUG
    //     std::cout << "Debug mode: On" << '\n';
    // #endif

    // #ifndef DEBUG
    //     std::cout << "Debug mode: Off" << '\n';
    // #endif
    // std::cout << NAME << std::endl;
    double radius;
    std::cout << "Enter the radius of circle: ";
    std::cin >> radius;

    std::cout << "The area of the given circle is " << constants::pi*pow(radius,2) << '\n';

    std::cout << "The ASCII code of 'a' is " << static_cast<int>('a') << '\n';
    return 0;

}