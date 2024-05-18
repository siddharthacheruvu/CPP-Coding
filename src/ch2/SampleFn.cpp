#include <iostream>

using namespace std;

int doubleNumber(int num)
{
    return 2*num;
}

int getValueFromUser()
{
    cout << "Enter a number: " << endl;
    int num{};
    cin >> num;
    return num;
}

int main()
{
    cout << doubleNumber(getValueFromUser()) << endl;
    return 0;
}