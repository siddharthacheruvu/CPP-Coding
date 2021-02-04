#include <iostream>

int main()
{
    double x{3.0};
    int y{4};

    std::cout << typeid(x + y).name() << " x + y = " << x + y << '\n';

    return 0;
}