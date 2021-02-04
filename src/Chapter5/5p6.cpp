#include <iostream>
#include <cmath>

bool isApproximatelyEqual(double a, double b, double epsilon)
{
    return ((std::abs(a-b)) <= (std::fmax(std::abs(a), std::abs(b))*epsilon));
}

bool isApproximatelyEqualAbsRel(double a, double b, double abs_epsilon, double rel_epsilon)
{
    if (std::abs(a-b) <= abs_epsilon)
    {
        return true;
    }
    return ((std::abs(a-b)) <= (std::fmax(std::abs(a), std::abs(b))*rel_epsilon));
}

int main()
{
    // double a{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
    // double b{1.0};
    // double rel_epsilon = 1e-8;
    // double abs_epsilon = 1e-12;
    

    // std::cout << isApproximatelyEqual(a, b, rel_epsilon) << '\n';
    // std::cout << isApproximatelyEqual(a-1.0, 0.0, rel_epsilon) << '\n';
    // std::cout << isApproximatelyEqualAbsRel(a-1.0, 0.0, abs_epsilon, rel_epsilon) << '\n';

    bool a{0};
    bool b{0};
    bool c{1};
    bool d{1};
    std::cout << std::boolalpha;
    std::cout << (a != b != c != d) << '\n';

    std::cout << std::noboolalpha;
    return 0;
}