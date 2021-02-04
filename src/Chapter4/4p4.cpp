#include <iostream>

int main()
{
    // Chapter: Unsigned integers
    
    unsigned int x{4294967295}; // largest 32-bit unsigned value possible
    std::cout << "x was: " << x << '\n';

    x = 4294967296; // 4294967296 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';
 
    x = 4294967297; // 4294967297 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';


    return 0;
}
