#include <iostream>
#include <bitset>
#include <cstdint>

std::int_fast64_t mypow(int base, int exp)
{
    std::int_fast64_t result{1};
    
    while (exp != 0)
    {
        if (exp & 1)
        {
            result *= base;
        }
        exp >>= 1;
        base *= base;
    }
    return result;
}

int main()
{
    // Bit Manipulation using bitset
    // std::bitset<8> num1{0b0010'0001};
    // num1.set(2);
    // std::cout << "Set2: " << num1 << '\n';
    // num1.reset(2);
    // std::cout << "Reset2: " << num1 << '\n';
    // num1.flip(0);
    // std::cout << "Flip0: " << num1 << '\n';
    // std::cout << "Test5: " << num1.test(5) << '\n';

    // Using Bitwise Operators
    std::uint_fast8_t mask0{1 << 0};
    std::uint_fast8_t mask1{1 << 1};
    std::uint_fast8_t mask2{1 << 2};
    std::uint_fast8_t mask3{1 << 3};
    std::uint_fast8_t mask4{1 << 4};
    std::uint_fast8_t mask5{1 << 5};
    std::uint_fast8_t mask6{1 << 6};
    std::uint_fast8_t mask7{1 << 7};
    // std::cout << mypow(2,10) << '\n';

    // std::cout << 0x00000100 << '\n';
    // std::cout << 0x00000400 << '\n';
    // std::cout << 0x00004000 << '\n';
    std::uint_fast8_t flags{0b0010'1100};
    std::cout << "bit0: " << ((flags & mask0)?"On":"Off") << '\n';
    flags |= mask0;
    std::cout << "After 'OR', bit0: " << ((flags & mask0)?"On":"Off") << '\n';
    flags &= ~mask0;
    std::cout << "After 'AND', bit0: " << ((flags & mask0)?"On":"Off") << '\n';
    flags ^= mask0;
    std::cout << "After 'XOR', bit0: " << ((flags & mask0)?"On":"Off") << '\n';
    std::cout << "Changing multiple bits: \n";
    flags |= (mask6 | mask7);
    std::cout << "bit6: " << ((flags & mask6)?"On":"Off") << '\n';
    std::cout << "bit7: " << ((flags & mask7)?"On":"Off") << '\n';

    return 0;
}