#include <iostream>
#include "circle.h"
#include "growth.h"

namespace foo::goo  // Nested Namespaces
{
    int doSomething(int x, int y)
    {
        return x + y;
    }
}


int main()
{
    namespace boo = foo::goo;       // Creating an alias for a nested namespace
    std::cout << boo::doSomething(4,3) << '\n';

    std::cout << mathconstants::pi << '\n';
    std::cout << mathconstants::e << '\n';
    return 0;
}