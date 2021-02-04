#include <iostream>

int g_x{2};

void doSomething()
{
    std::cout << g_x + 2 << '\n';
}

int main()
{
    std::cout << g_x << '\n';
    doSomething();

    std::cout << g_x++ << '\n';
    std::cout << g_x << '\n';
    doSomething();

    return 0;
}