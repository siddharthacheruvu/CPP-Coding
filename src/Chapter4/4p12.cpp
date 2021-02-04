#include <iostream>
#include <bitset>

int main()
{
    int bin{};
    bin = 0xFF;
    std::cout << bin << '\n';
    int num1{2'111'123};
    std::cout << num1 << '\n';

    std::bitset<8> bin2{0xF};
    std::cout << bin2 << '\n';

}