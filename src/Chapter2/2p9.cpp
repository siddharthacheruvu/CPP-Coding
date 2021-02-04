#include <iostream>

// using namespace std;

// #define MY_CONST

int main()
{
    #ifdef MY_CONST
        std::cout << "My Constant is " << std::endl; 
    #endif

    #ifndef MY_CONST
        std::cout << "My Constant is not defined.\n";
    #endif
}
