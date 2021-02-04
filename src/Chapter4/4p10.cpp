#include <iostream>

int isEqual(int x, int y)
{
    return (x == y);
}

int main()
{

    std::cout << "Enter an integer: ";
    int n1{};
    std::cin >> n1;
   
    std::cout << "Enter another integer: ";
    int n2{};
    std::cin >> n2;

    std::cout << std::boolalpha;

    if (isEqual(n1, n2))
    {
        std::cout << n1 << " and " << n2 << " are equal.\n";
    }else
    {
        std::cout << n1 << " and " << n2 << " are not equal.\n";
    }
    
    return 0;
}