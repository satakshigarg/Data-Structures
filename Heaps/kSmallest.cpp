vector<int> kSmallest(int *arr, int n, int k) {
    vector<int> kSmallEle;
    priority_queue<int> maxHeap;
    int size = 0, i = 0;
    while (size <= k && i < n) {
        maxHeap.push(arr[i]);
        size += 1
        if (size > k) {
            maxHeap.pop();
            size -= 1;
        }
        i += 1;
    }
    while (!maxHeap.empty()) {
        kSmallEle.push_back(maxHeap.top());
        maxHeap.pop();
    }
    return kSmallEle;
} 
