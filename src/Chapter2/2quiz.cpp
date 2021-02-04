#include <iostream>

// 1. Define a function 'readNumber' to get an integer from the user
int readNumber()
{
    std::cout << "Enter an integer: \n";
    int num{};
    std::cin >> num;
    return num;
}

// 2. Define a function 'writeAnswer'
void writeAnswer(int ans)
{
    std::cout << "The answer is " << ans << '\n';
}

// 3. Write the main function to use 1 and 2 to obtain the sum of two user given numbers.
int main()
{
    int num1{readNumber()};
    int num2{readNumber()};
    writeAnswer(num1+num2);
    return 0;
}