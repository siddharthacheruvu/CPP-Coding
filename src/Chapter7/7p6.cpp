#include <iostream>

int main()
{
    tryAgain:
        std::cout << "Enter a non-negative number: ";
        double d{};
        std::cin >> d;
    if (d < 0.0)
    {
        goto tryAgain;  // Tip: DONOT use 'goto'
    }
    std::cout << "You have entered " << d << '\n';

    return 0;
}