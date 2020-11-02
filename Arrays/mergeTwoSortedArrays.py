def mergeSortedArr(arr1, arr2, size1, size2):
    i, j, k = 0, 0, 0
    sortedArr = [0] * (size1 + size2)
    while i < size1 and j < size2:
        if arr1[i] < arr2[j]:
            sortedArr[k] = arr1[i]
            i += 1
        else:
            sortedArr[k] = arr2[j]
            j += 1
        k += 1
    while i < size1:
        sortedArr[k] = arr1[i]
        k += 1
        i += 1
    while j < size2:
        sortedArr[k] = arr2[j]
        j += 1
        k += 1
    return sortedArr


arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))
print(*(mergeSortedArr(arr1, arr2, len(arr1), len(arr2))))
