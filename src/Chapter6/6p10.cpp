#include <iostream>

void printSomething()
{
    static int s_value{1};
    ++s_value;
    std::cout << s_value << '\n';
}

int main()
{
    printSomething();
    printSomething();
    printSomething();

    return 0;
}