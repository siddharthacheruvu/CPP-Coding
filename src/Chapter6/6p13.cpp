#include <iostream>
#include <cstdint>

using error_t = std::int_fast64_t;

int main()
{
    error_t x{2};

    std::cout << "The value of x is " <<  x << '\n';
    std::cout << sizeof(error_t) << '\n';

    return 0;
}