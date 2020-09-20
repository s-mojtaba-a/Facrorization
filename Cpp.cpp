#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void prime_factorization(int n, vector<int> &s)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s.emplace_back(i);
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1)
        s.emplace_back(n);
}

void factors(int n, vector<int> &s)
{
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0)
        {
            s.emplace_back(i);
            if (n / i != i)
                s.emplace_back(n / i);
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}