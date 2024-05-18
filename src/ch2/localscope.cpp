#include <iostream>     // This is called preprocessor directive

using namespace std;

int doubleANumber(int x)    // Define a function with the identifier 'doubleANumber'
{
    int y{};    // y enters scope here
    y = x*x;
    return y;
}   // y is destroyed and goes out of scope here

int main()
{
    // num is not in scope yet
    cout << "Enter an integer: " << endl;
    int num{};  // num is initialized here and enters scope
    cin >> num;
    cout << "The square of the provided integer is " << doubleANumber(num) << endl;
    return 0;
}   // num goes out of scope here