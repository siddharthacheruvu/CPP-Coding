#include <iostream>

// Function checks if two integers are equal or not.
int isEqual(int x, int y)
{
    return (x == y);
}

int main()
{  
    std::cout << true << "\n";
    std::cout << false << "\n";

    std::cout << std::boolalpha;
    std::cout << true << "\n";
    std::cout << false << "\n";

    std::cout << std::noboolalpha;
    bool b1{12};
    std::cout << b1 << "\n";

    std::cout << "Enter a boolean: ";
    bool n1{};
    std::cin >> n1;
    std::cout << "You have entered: " << n1 << "\n";

    // std::cout << "Enter an integer: ";
    // int n1{};
    // std::cin >> n1;
   
    // std::cout << "Enter another integer: ";
    // int n2{};
    // std::cin >> n2;

    // std::cout << std::boolalpha;

    // std::cout << n1 << " and " << n2 << " are equal?\n";   
    // std::cout << isEqual(n1, n2) << '\n';

    return 0;

}