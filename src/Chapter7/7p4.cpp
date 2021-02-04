#include <iostream>

void printNum(int num)
{
    switch (num)
    {
        case 1:
            std::cout << "You have entered 1\n";
            break; 
        case 2:
            std::cout << "You have entered 2\n";
            // break;
            [[fallthrough]]; 
        case 3:
            std::cout << "You have entered 3\n";
            break; 
        case 4:
            std::cout << "You have entered 4\n";
            break; 
        default:
            std::cout << "You have entered an unknown number\n";
            break; 
    }


}

int main()
{
    std::cout << "Enter a digit (select from 1, 2, 3, 4): ";
    int num{};
    std::cin >> num;

    printNum(num);
    return 0;
}