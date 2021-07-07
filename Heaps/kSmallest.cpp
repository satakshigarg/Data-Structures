vector<int> kSmallest(int *arr, int n, int k) {
    vector<int> kSmallEle;
    priority_queue<int> heapKEle;
    int size = 0, i = 0;
    while (size <= k && i < n) {
        heapKEle.push(arr[i]);
        size += 1
        if (size > k) {
            heapKEle.pop();
            size -= 1;
        }
        i += 1;
    }
    while (!heapKEle.empty()) {
        kSmallEle.push_back(heapKEle.top());
        heapKEle.pop();
    }
    return kSmallEle;
} 
