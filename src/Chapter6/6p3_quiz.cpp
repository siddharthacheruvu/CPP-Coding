#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int smaller{};  // smaller enter the outer scope here
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{};   // larger enter the outer scope here
    std::cin >> larger;

    if (larger < smaller)
    {
        int temp{smaller};  // temp enters the nested scope here
        std::cout << "Swapping the values\n";
        smaller = larger;
        larger = temp;
    }   // temp dies here

    std::cout << "Smaller value is " << smaller << '\n';
    std::cout << "Larger value is " << larger << '\n';

    return 0;
} // larger, smaller die here