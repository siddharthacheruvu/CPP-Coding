#include <iostream>

int cout ()
{
    return 5;
}

int main()
{
    // using namespace std;    // This causes ambiguous symbol error. Solution:
                            // use using declaration rather than directive. Or,
                            // use the scope resolution operator ::
    std::cout << "Hello there!" << '\n';

    return 0;
}