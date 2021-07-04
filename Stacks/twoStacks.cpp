#include <bits/stdc++.h>
using namespace std;

class twoStacks {
    int *arr;
    int top1, top2;
    int size;
public:
    twoStacks(int n) {
        size = n;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }
    
    void push1(int x) {
        if (top - top1 > 1) {
            top1 += 1;
            arr[top1] = x;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }
    
    void push1(int x) {
        if (top - top1 > 1) {
            top2 -= 1;
            arr[top2] = x;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }
    
    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1 -= 1;
            return x;
        }
        else {
            cout << "Underflow" << endl;
            return -1;
        }
    }
    
    int pop2() {
        if (top2 < n) {
            int x = arr[top2];
            top2 += 1;
            return x;
        }
        else {
            cout << "Underflow" << endl;
            return -1;
        }
    }
}

