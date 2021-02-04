#include <iostream>
#include <cstdint>

int main()
{
    constexpr std::uint_fast8_t mask0{0b0000'0001};
    constexpr std::uint_fast8_t mask1{0b0000'0010};
    constexpr std::uint_fast8_t mask2{0b0000'0100};
    constexpr std::uint_fast8_t mask3{0b0000'1000};
    constexpr std::uint_fast8_t mask4{0b0001'0000};
    constexpr std::uint_fast8_t mask5{0b0010'0000};
    constexpr std::uint_fast8_t mask6{0b0100'0000};
    constexpr std::uint_fast8_t mask7{0b1000'0000};

    std::uint_fast8_t flags{0b0010'0101};
    std::cout << "bit 0 is " << ((flags & mask0)?"on":"off") << '\n';
    std::cout << "bit 1 is " << ((flags & mask1)?"on":"off") << '\n';

    flags |= mask1;
    std::cout << "bit 1 is " << ((flags & mask1)?"on":"off") << '\n';
}