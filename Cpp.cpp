#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


template<typename T>
void prime_factorization(T n, vector<T> &s)
{
    for (T i = 2; i * i <= n; i++)
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


template<typename T>
void factors(T n, vector<T> &s)
{
    for (T i = 1; i * i <= n; i++)
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



######## python 3.8.2 ########

factors=[]
def factor(n):
    i=1
    while i*i<=n :
        if n%i==0:
            factors.append(i)
            if n//i != i :
                factors.append(n//i)

