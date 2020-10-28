def isEven(num):
    if num % 2 == 0:
        return True
    return False


def remEven(arr):
    evenArr = []
    for x in arr:
        if not isEven(x):
            evenArr.append(x)
    return evenArr


arr = list(map(int, input().split()))
print(*(remEven(arr)))
