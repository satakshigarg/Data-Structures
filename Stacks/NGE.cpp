#include <bits/stdc++.h>
using namespace std;

void nextGreaterEle(int arr[], int x) {
    int n = arr.size();
    unordered_map<int, int> nge;
    stack<int> nums;
    nums.push(arr[0]);
    for (int i = 1; i < n; i++) {
        if (num.empty()) {
            nums.push(arr[i]);
            continue;
        }
        while (s.empty() == false and nums.top() < arr[i]) {
            nge[nums.top()] = arr[i];
            nums.pop();
        }
        nums.push(arr[i]);
    }
    while (nums.empty() == False) {
        nge[nums.top()] = -1;
        nums.pop();
    }
}
    
   
