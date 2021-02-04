#include <iostream>

int calculate(int x, char o, int y)
{
    switch (o)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x*y;
        case '/':
            return x/y;
        case '%':
            return x%y;
        default:
            std::cout << "Invalid operator!\n";
            return 0;
    }
}


int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter an operator (+, -, *, /, or %): ";
    char o{};
    std::cin >> o;

    std::cout << x << " " << o << " " << y << " = " << calculate(x, o, y) << '\n';

    if (x == y)
    {
        std::cout << "x = y\n";
    }else if (x > y)
    {
        std::cout << "x > y\n";
    }else
    {
        std::cout << "x < y\n";
    }
    
    return 0;
}