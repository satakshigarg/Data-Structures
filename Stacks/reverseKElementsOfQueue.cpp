#include <bits/stdc++.h>
using namespace std;

void reverseKQuue(int k, queue<int>& Nums) {
    int n = Nums.size(); 
    if (n == 0 or k > n) {
        return;
    }
    if (k <= 0) {
        return;
    }
    stack<int> reverse;
    for (int i = 0; i < k; i++) {
        reverse.push(Nums.front());
        Nums.pop();
    }
    for (int i = 0; i < k; i++) {
        Nums.push(reverse.top())
        reverse.pop();
    }
    for (int i = 0; i < (n-k); i++) {
        Nums.push(Nums.front());
        Nums.pop();
    }
}
    
   
