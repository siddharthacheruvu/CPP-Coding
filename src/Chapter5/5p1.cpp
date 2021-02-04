#include <iostream>

//  Operator Precedence
int main()
{
    std::cout << 5+3%4 << '\n';

    int x{};
    int y{2}, z{3};

    x=y=z;  // Treated as x=(y=z);
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';


}