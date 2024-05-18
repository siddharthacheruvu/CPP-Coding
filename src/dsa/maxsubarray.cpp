#include <bits/stdc++.h>

using namespace std;

// Find maximum sum subarray
int FindMaxSubArraySum1(const vector<int>& arr)
{
    size_t l = arr.size();
    int output = 0;
    // Trivial implementation - O(n^3)
    for (int a = 0; a < l; a++)
    {
        for (int b = a; b < l; b++)
        {
            int sum = 0;
            for (int c = a; c <= b; c++)
            {
                sum += arr[c];
            }
            output = (output>=sum)?output:sum;
        }
    }
    return output;
}
// O(n^2 implementation)
int FindMaxSubArraySum2(const vector<int>& arr)
{
    size_t l = arr.size();
    int output = 0;
    // Trivial implementation - O(n^3)
    for (int a = 0; a < l; a++)
    {
        int sum = 0;
        for (int b = a; b < l; b++)
        {
            sum += arr[b];
            output = (output>=sum)?output:sum;
        }
    }
    return output;
}
// O(n) implementation - Kadane's algorithm
int FindMaxSubArraySum3(const vector<int> & arr)
{
    size_t n = arr.size();
    int best = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = max(sum + arr[i], arr[i]);
        best = max(best, sum);

        cout << "Step: " << i << ", sum = " << sum << ", best = " << best << '\n';
    }
    return best;
} 

int main()
{
    vector<int> inp{};
    int n;
    cout << "Enter a series of integers: " << '\n';
    while (cin >> n)
    {
        inp.push_back(n);
    }
    cout << "Max sub array sum is " << '\n' << FindMaxSubArraySum3(inp) << '\n';

    return 0;
}