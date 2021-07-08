void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    return;
}

void selectionSort(int *arr, int n) {
    int start = 0, end = 0;
    while (start < n && end < n) {
        int first = arr[first];
        int ind = start;
        end = start + 1;
        while (end < n) {
            if (arr[end] < arr[start]) {
                ind = end;
            }
            end += 1;
        }
        swap(arr[start], arr[ind]);
    }
}
