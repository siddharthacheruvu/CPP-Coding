#include <iostream>

int main()
{
    int x{6};
    int y = x++;

    // std::cout << x << ' ' << y << '\n'; 
    
    // Ternary Operator '?'

    int larger{};

    larger = (x>y)?x:y;     // If x > y, evaluates to x otherwise y.
    std::cout << "Larger value is " << larger << '\n';
    std::cout << ((x>y)?x:y) << '\n';

    std::cout << (x>y)?x:y << '\n';
    return 0;
}