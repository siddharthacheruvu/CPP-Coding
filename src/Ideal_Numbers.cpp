#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <math.h>
#include <unordered_set>

using namespace std;

int main()
{
    // Ideal numbers are the ones with only 3 and 5 as prime divisors i.e, 3^x*5^y
    long low = 1, high = pow(10,9);
    queue <long long> q1;
    q1.push(1);
    unordered_set <long long> s1;
    s1.insert(1);
    long long current, nx3, nx5;
    int result = 0;
    while (!q1.empty())
    {
        current = q1.front();   
        q1.pop();  
        if ((current >= low) & (current <= high))
        {
            cout << current << endl;
            result++;
        }
        nx3 = current*3;
        nx5 = current*5;

        if (nx3 <= high)
        {
            if (s1.find(nx3) == s1.end())
            {
                s1.insert(nx3);
                q1.push(nx3);
            }
        }

        if (nx5 <= high)
        {
            if (s1.find(nx5) == s1.end())
            {
                s1.insert(nx5);
                q1.push(nx5);
            }
        }
    };

    cout << "Total Count is: " << result << endl;

    return 0;

}