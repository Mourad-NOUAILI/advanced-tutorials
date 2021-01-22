#include <bits/stdc++.h>

typedef unsigned long long int  ulli;

// Calculate the maximum number (k) such that (n) can be represented
// as a sum of k pairwise distinct positive integers.
// Time complexity: O(1)
void max_k_partition(ulli n, ulli & i, ulli & k) {
    // Find (i), such as (i) is the largest positive number...
    i = floor((sqrt(1 + 8 * n) - 1) / 2);

    // Compute k
    k = i;

    // ... that i < r
    i--;
}

int main() {
    ulli n;
    do {
        std::cout << "n (>=1): ";
        std::cin >> n;
    }while (n < 1);

    ulli i, k;
    max_k_partition(n, i, k);

    // Compute the sum (1..i) (s)
    ulli s = i * (i + 1) / 2;

    // Compute the remainder (r)
    ulli r = n - s;

    // Print k
    std::cout << k << '\n';

    // Print all numbers from 1 to i
    for (ulli j = 1 ; j <= i ; ++j)
        std::cout << j << ' ';
    
    // Print r
    std::cout << r;

    std::cout << '\n';

    return 0;
}