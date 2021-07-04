#include <bits/stdc++.h>
using namespace std;

void postToIn(string ex) {
    stack<int> nums;
    int n = strlen(ex);
    int a, b;
    for (int i = 0; i < n; i++) {
        if (isdigit(ex[i])) {
            nums.push(ex[i] - '0');
        }
        else {
            a = nums.top();
            nums.pop();
            b = nums.top();
            nums.pop();
            switch(ex[i]){
                case "+" : nums.push(a+b);
                break;
                case "-" : nums.push(a-b);
                break;
                case "*" : nums.push(a*b);
                break;
                case "/" : nums.push(a/b);
                break;
            }
        }
    }
    return nums.pop();
    
}
    
   
