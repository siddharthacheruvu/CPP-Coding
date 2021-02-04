#include <iostream>
#include <string>

int main()
{
    std::string s0{"Initial string"};
    std::string s1{};       // Empty list initialization
    std::string s2(s0);     // copy initialization
    std::string s3(s0,8,3);
    std::string s4 ("A character sequence");
    std::string s5 ("Another character sequence", 12);
    std::string s6a (10, 'x');
    std::string s6b (10, 42);      // 42 is the ASCII code for '*'
    std::string s7(s0.begin(), s0.begin()+10);


    std::cout << "s0 is " << s0 << std::endl;
    // std::cout << "s1 is " << s1 << std::endl;
    // std::cout << "s2 is " << s2 << std::endl;
    // std::cout << "s3 is " << s3 << std::endl;
    // std::cout << "s4 is " << s4 << std::endl;
    // std::cout << "s5 is " << s5 << std::endl;
    // std::cout << "s6a is " << s6a << std::endl;
    // std::cout << "s6b is " << s6b << std::endl;
    // std::cout << "s7 is " << s7 << std::endl;

    std::cout << "Printing in normal order.\n";
    for (std::string::iterator it = s0.begin(); it != s0.end(); it++)
    {        
        std::cout << *it << '\n';
    }

    std::cout << "Printing in reverse order.\n";
    for (std::string::reverse_iterator rit = s0.rbegin(); rit != s0.rend(); rit++)
    {       
        std::cout << *rit << '\n';
    }

    for (auto it = s0.cbegin(); it != s0.cend(); it++)
    {
        std::cout << *it << '\n';
    }

    // Another way
    // int s0_length {s0.size()};
    // for (int i=0; i < s0_length; i++)
    // {
    //     std::cout << s0[i] << '\n';
    // }


    return 0;
}
