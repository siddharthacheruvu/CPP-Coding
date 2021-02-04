#include <iostream>
 
int add(int x, int y);      // This line is a forward declaration done using a 'Function Prototype'

int main()
{
    std::cout << "The sum is: " << add(3, 4) << '\n';
    return 0;
}
 
int add(int x, int y)
{
    return x + y;
}