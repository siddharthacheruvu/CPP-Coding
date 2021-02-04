#include <iostream>

auto add(int x, int y) -> int
{
    return (x + y);
}

int main()
{
    auto x{3.5};

    std::cout << x << '\n';
    std::cout << typeid(add(2,3)).name() << '\n';
    return 0;
}