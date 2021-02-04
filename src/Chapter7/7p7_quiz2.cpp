#include <iostream>

int main()
{
    int counter{5};
    
    while (counter >= 1)
    {
        int inner{counter};
        while (inner >= 1)
        {
            std::cout << inner-- << ' ';
        }
        std::cout << '\n';
        --counter;
    }

    return 0;
}