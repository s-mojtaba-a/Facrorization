C++ impelemenation of two functions which give a vector of prime factors and all factors of a number.

emplace_back is faster than push_back :)

There is a point in prime_factorization function :

We iterarte throw numbers from 2 to sqrt(n) and it reduces the time complexity of the algorithm from O(n) to 
O(sqrt(n)). The proof of correctness of the algorithm :

Consider the numper 'N' as p1^x1 * p2^x2 * p3^x3 * p4^x4 .
Then sqrt(N) will be p1^(x1/2) * p2^(x2/2) * p3^(x3/2) * p4^(x4/2) .
When we iterate from two to n, it will be ensured that we visit all prime factors which have powers more than 1.
I mean that if xi > 1 ,then I will surely visit pi during iteratin.
But if xi = 1 ,then I may visit pi (( N = 30 )) or may not visit pi (( N = 6 )).
Therefor we check if N>1, then N is the last prime factor which has to be push_backed in the vector. 