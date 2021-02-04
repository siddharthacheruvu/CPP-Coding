#include <iostream>

int g_x{5};

void printSomething()
{
    std::cout << g_x << '\n';
}

int main()
{
    int g_x{10};
    ++g_x;
    std::cout << g_x << '\n';
    ++(::g_x);
    printSomething();

    return 0;
}