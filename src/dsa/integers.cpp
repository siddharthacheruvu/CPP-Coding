#include <bits/stdc++.h>

using namespace std;

int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);

    long long x;
    int n = 13204;
    int m = 17;

    for (int i = 2; i <= n; i++)
    {
        x = (x*i)%m;
    }


    cout << x%m << '\n';

    return 0;
}