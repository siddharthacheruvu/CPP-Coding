#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>

typedef std::unordered_map<std::string, int> rollcallmap;
int main()
{
    std::vector<int> first;

    first.push_back(100);
    first.push_back(200);
    first.push_back(300);
    first.push_back(400);

    std::vector<int> second = {1, 2, 3, 4};

    // std::cout << "first contains:\n";
    // for (auto it1 = first.begin(); it1 != first.end(); it1++)
    // {
    //     std::cout << " " << *it1 << '\n';
    // }

    // std::cout << "second contains:\n";
    // for (auto it2 = second.rbegin(); it2 != second.rend(); it2++)
    // {
    //     std::cout << " " << *it2 << '\n';
    // }
    
    std::stack<int> first_stack;
    std::stack<int,std::vector<int>> second_stack(second);

    int top_el{};
    std::cout << "second stack contains:\n";
    while (second_stack.size() > 0)
    {
        top_el = second_stack.top();
        second_stack.pop();
        std::cout << " " << top_el << '\n';
    }

    rollcallmap class1 = {{"Siddhartha", 1}, {"Nirupama", 2}, {"Bharathi", 3}, {"Subrahmanyam", 4}};

    std::cout << "unordered map contains:\n";
    for (auto it = class1.begin(); it != class1.end(); it++)
    {
        std::cout << " " << it->first << " " << it->second << '\n';
    }

    std::cout << class1["Subrahmanyam"] << '\n';
    
    return 0;
}