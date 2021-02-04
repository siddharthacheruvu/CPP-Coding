#include <iostream>

int main()
{
    // Type Casting - static_cast
    char ch1{'a'};
    std::cout << ch1 << "\n";
    std::cout << static_cast<int>(ch1) << "\n";
    std::cout << ch1 << "\n";

    // Escape Sequences
    std::cout << "Hi! \nMy name is \t\"Siddhartha Cheruvu\" \n";

    return 0;
}