#include <iostream>
#include <bitset>
#include <cstdint>

int main()
{
    unsigned int num1{343};

    std::cout << "num1 is " << num1 << '\n';
    std::cout << (num1 << 1) << '\n';
    std::cout << (num1 << 2) << '\n';

    std::cout << (num1 >> 1) << '\n';
    std::cout << (num1 >> 2) << '\n';

    return 0;
}