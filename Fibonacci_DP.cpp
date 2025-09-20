#include <iostream>
#include <vector>
#include <stdexcept>

// Iterative DP (tabulation) Fibonacci
long long fib(int n) {
    if (n < 0) throw std::invalid_argument("n must be non-negative");
    if (n < 2) return n; // 0 or 1
    std::vector<long long> dp(n + 1, 0);
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// Space-optimized version (O(1) extra space)
long long fib_optimized(int n) {
    if (n < 0) throw std::invalid_argument("n must be non-negative");
    if (n < 2) return n;
    long long prev2 = 0, prev1 = 1, cur = 0;
    for (int i = 2; i <= n; ++i) {
        cur = prev1 + prev2;
        prev2 = prev1;
        prev1 = cur;
    }
    return cur;
}

int main() {
    int n; 
    if (!(std::cin >> n)) {
        std::cerr << "Failed to read n" << std::endl;
        return 1;
    }
    try {
        std::cout << fib(n) << std::endl; // Or fib_optimized(n)
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}