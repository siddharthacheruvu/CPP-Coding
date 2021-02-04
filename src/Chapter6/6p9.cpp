#include <iostream>

namespace gconstants
{
    static int g_x{5};
    const int g_y{2};
    constexpr int g_z{4};
}

void doSomething()
{
    ++(gconstants::g_x);
}

int main()
{
    doSomething();
    std::cout << gconstants::g_x << '\n';
    std::cout << gconstants::g_y << '\n';
    std::cout << gconstants::g_z << '\n';
    return 0;
}