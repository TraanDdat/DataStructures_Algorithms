def getLIS(arr):
    n = len(arr)

    dp = [1] * n

    seq = list(range(n))

    for i in range(n):
        for prev in range(i):
            if arr[prev] < arr[i]:
                dp[i] = max(dp[i], 1 + dp[prev])
                seq[i] = prev
                print(seq)
    print('\n')
    ans = -1
    ans_ind = -1
    for i in range(n):
        if dp[i] > ans:
            ans = dp[i]
            ans_ind = i
            print(ans_ind)
    print('\n')

    res = []
    res.append(arr[ans_ind])
    while seq[ans_ind] != ans_ind:
        ans_ind = seq[ans_ind]
        print(ans_ind)
        res.append(arr[ans_ind])

    res.reverse()
    return res

if __name__ == "__main__":
    arr = [1,2,4,5,3]

    max_lis = getLIS(arr)

    print(" ".join(map(str, max_lis)))