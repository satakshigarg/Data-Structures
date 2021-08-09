#include <bits/stdc++.h>
using namespace stde;

void update(int *bit, int pos, int val) {
    for (; pos <= n; pos += (pos&-pos)) {
        bit[pos] += val;
    }
}

int getSum(int* bit, int query) {
    int sum = 0;
    for (; query >= 0; query -= (query&-query)) {
        sum += bit[query];
    }
}

void constructBIT(int* bit, int *A) {
    for (int i = 1; i <= n; i += 1) {
        update(bit, i, A[i-1]);
    }
}
