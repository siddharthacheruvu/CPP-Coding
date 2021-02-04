#include <iostream>

bool isVowel(char c)
{
    switch (c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        default:
            return false;
    }
}


int main()
{
    std::cout << "Enter a character: ";
    char c{};
    std::cin >> c;
    
    std::cout << std::boolalpha;
    std::cout << "The character entered is vowel: " << isVowel(c) << '\n';
    return 0;
}