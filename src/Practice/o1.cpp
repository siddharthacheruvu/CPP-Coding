#include <iostream>
#include <bitset>

int main()
{
    std::bitset<8> bits{0b0000'0101};
    bits.set(3);
    bits.flip(4);
    bits.reset(4);

    std::cout << "All the bits: " << bits << '\n';
    std::cout << "The value of bit 3: " << bits.test(3) << '\n';
    std::cout << "The value of bit 4: " << bits.test(4) << '\n';

    
    return 0;
}