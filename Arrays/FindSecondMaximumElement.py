def findSecondMax(arr):
    n = len(arr)
    maxEle = -2147483648
    secMaxEle = -2147483648
    for x in arr:
        if x > maxEle:
            secMaxEle = maxEle
            maxEle = x
            continue
        if x > secMaxEle:
            secMaxEle = x
    return secMaxEle

arr = list(map(int, input().split()))
print(findSecondMax(arr))
