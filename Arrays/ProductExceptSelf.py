def productExceptSelf(arr):
    n = len(arr)
    start = [1] + ([0] * (n - 1))
    end = ([0] * (n - 1)) +[1]
    res = [0] * n
    for i in range(1, n):
        start[i] = start[i - 1] * arr[i - 1]
        end[n - 1 - i] = end[n - i] * arr[n - i]
    for i in range(n):
        res[i] = start[i] * end[i]
    return res

arr = list(map(int, input().split()))
print(productExceptSelf(arr))
