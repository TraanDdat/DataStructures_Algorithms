# KnapSack Using Recursion
""" 
def KnapSack(capacity, v, w, n):
    if n == 0 or capacity == 0:
        return 0
    if w[n-1] <= capacity:
        no_pick = KnapSack(capacity, v, w, n-1)
        yes_pick = v[n-1] + KnapSack(capacity - w[n-1], v, w, n-1)

        return no_pick > yes_pick and no_pick or yes_pick
    else:
        return KnapSack(capacity, v, w, n-1)
"""
# KnapSack Using Memoization
"""
def KnapSack(capacity, v, w, n, memo):
    if n == 0 or capacity == 0:
        memo[n][capacity] = 0
        return 0
    if memo[n][capacity] != -1:
        return memo[n][capacity]
    if w[n-1] <= capacity:
        no_pick = KnapSack(capacity, v, w, n-1, memo)
        yes_pick = v[n-1] + KnapSack(capacity - w[n-1], v, w, n-1, memo)
        memo[n][capacity] = no_pick > yes_pick and no_pick or yes_pick
        return memo[n][capacity]
    else:
        memo[n][capacity] = KnapSack(capacity, v, w, n-1)
        return memo[n][capacity]

def knapsack_memo(W, val, wt, n):
    n = len(val)

    # Memoization table to store the results
    memo = [[-1] * (W + 1) for _ in range(n + 1)]

    return KnapSack(W, val, wt, n, memo)
"""
# KnapSack Using Tabulation
def knapsack_tabulation(capacity, v, w, n):
    dp = [[0] * (capacity + 1) for _ in range(n + 1)]
    for i in range(n+1):
        for j in range(capacity+1):
            if i == 0 or j == 0:
                dp[i][j] = 0
            else:
                # If current item's weight fits, choose max of (exclude, include)
                if w[i-1] <= j:
                    dp[i][j] = max(dp[i-1][j], v[i-1] + dp[i-1][j - w[i-1]])
                else:
                    dp[i][j] = dp[i-1][j]
    return dp[n][capacity]
if __name__ == "__main__":
    weights = [1, 2, 3]
    values = [10, 15, 40]
    capacity = 6
    n = len(values)

    result = knapsack_tabulation(capacity, values, weights, n)

    print(f"Maximum value in Knapsack = {result}")