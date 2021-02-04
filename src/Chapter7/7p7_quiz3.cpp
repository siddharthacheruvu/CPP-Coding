#include <iostream>

int main()
{
    int outer{1};

    while (outer <= 5)
    {
        int inner{5};
        while (inner >= 1)
        {
            (inner > outer)?(std::cout << ' '):(std::cout << inner);
            std::cout << ' ';
            --inner;
        }
        std::cout << '\n';
        ++outer;
    }

    return 0;
}