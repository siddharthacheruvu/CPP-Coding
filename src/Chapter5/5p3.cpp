#include <iostream>
#include <cmath>
#include <cstdint>
#include <bitset>

std::int_fast64_t myPow(int base, int exp)
{
    std::int_fast64_t result{1};
    // std::bitset<8> expcurr{exp};
    std::cout << "Base is " << base << '\n';
    std::cout << "Exponent is " << exp << '\n';

    while (exp)
    {
        if (exp & 1)
        {
            result *= base;
        }
        exp >>= 1;
        // expcurr = exp;
        std::cout << "Current exp is " << exp << '\n';
        // std::cout << "Current exp (bit) is " << expcurr << '\n';
        base *= base;
    }
    return result;
}

int main()
{
    int x{2}, y{11};

    std::cout << "x % y = " << x%y << '\n';
    std::cout << "x^y = " << pow(x,y) << '\n';
    std::cout << "x^y (myPow function) = " << myPow(x,y) << '\n';

    std::cout << (101>>4) << '\n';

    return 0;
}