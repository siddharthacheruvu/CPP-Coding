#include <iostream>

int main()
{
    int x{2};
    {
        int y{3};
        std::cout << x << '\n';
        std::cout << y << '\n';
    }

    std::cout << x << '\n';

    return 0;
}