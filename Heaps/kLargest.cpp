vector<int> kLargest(int *arr, int n, int k) {
    vector<int> kLargeEle;
    for (int i = 0; i < n; i++) {
        arr[i] *= -1;
    }
    priority_queue<int> minHeap;
    int size = 0, i = 0;
    while (size <= k && i < n) {
        minHeap.push(arr[i]);
        size += 1
        if (size > k) {
            minHeap.pop();
            size -= 1;
        }
        i += 1;
    }
    while (!minHeap.empty()) {
        kLargeEle.push_back(-1 * minHeap.top());
        minHeap.pop();
    }
    return kLargeEle;
} 
