void minHeapify(int *arr, int n, int i) {
    int minimum = i;
    int left = (2*i + 1)/2;
    int right = (2*i + 2)/2;
    if (left < n && arr[left] < arr[minimum]) {
        minimum = left;
    }
    if (right < n && arr[right] < arr[minimum]) {
        minimum = right;
    }
    if (minimum != i) {
        swap(arr[i], arr[minimum]);
        minHeapify(arr, n, minimum);
    }
}



void convertMaxToMinHeap(int * arr, int n) {
    for (int i = (n-2)/2; i >= 0; i--) {
        minHeapify(arr, n, i);
    }
}
