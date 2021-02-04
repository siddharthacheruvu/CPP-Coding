#include <iostream>
#include <limits>
#include <iomanip>
int main()
{
    double zero{0.0};
    double posinf{1.0/zero};
    std::cout << posinf << '\n';
    double inf = std::numeric_limits<double>::infinity();

    double neginf{-1.0/zero};
    std::cout << neginf << '\n';

    double nan{zero/zero};
    std::cout << nan << '\n';

    std::cout << (5.0 > -inf) << '\n';

    std::cout << std::setprecision(12);


}