#include <iostream>
#include <cstdint>

int main()
{
    int x{2};
    unsigned short y{};
    int_fast32_t z{};
    y = -2;

    std::cout << "Size of x is " << sizeof(x) << '\n';
    std::cout << "y is " << y << '\n';
    std::cout << "z is " << z << '\n';
    std::cout << "Size of std::size_t is " << sizeof(std::size_t) << '\n';
}