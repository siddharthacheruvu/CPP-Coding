#include <iostream>
#include <cstdlib>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int num1{ }, num2{ }, num3{ };
    std::cin >> num1 >> num2 >> num3;
    return num1 + num2 + num3;
}

int doubleNumber(int x)
{
    return 2*x;
}

int main()
{   
    std::cout << doubleNumber(getValueFromUser()) << '\n';

    return 0;
    // return EXIT_SUCCESS;

}

