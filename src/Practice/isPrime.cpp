#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int isPrime(long n)
{
    for (long i = 2; i*i <= n; i++)
    {
        if (n%i == 0){
            return i;
        }
    }
    return 1;
}

int main()
{
    long n = 49;
    cout << isPrime(n) << endl;
}