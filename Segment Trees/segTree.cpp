#include <iostream>

using namespace std;

int constructSegTree(int *segTree, int curr, int *arr, int l, int r) {
    if (l == r) {
        segTree[curr] = arr[l];
        return segTree[curr];
    }
    int mid = l + (r-l)/2;
    segTree[curr] = constructSegTree(segTree, 2*curr+1, arr, l, mid) +
                    constructSegTree(segTree, 2*curr+2, arr, mid+1, r);
    return segTree[curr];
}

int getSum(int *segTree, int nodeL, int nodeR, int reqL, int reqR) {
    if (nodeL >= reqL && nodeR <= reqR) {
        return segTree[curr];
    }
    if (nodeL > reqR || nodeR < reqL) {
        return 0;
    }
    int mid = nodeL + (nodeR-nodeL)/2;
    return getSum(segTree, nodeL, mid, reqL, reqR) +
        getSum(segTree, mid+1, nodeR, reqL, reqR);
}

void update(int *segTree, int pos, int val, int curr, int nodeL, int nodeR) {
    if (nodeL > pos || nodeR < pos) {
        return;
    }
    segTree[curr] += val;
    if (nodeL != nodeR) {
        int mid = nodeL + (nodeR-nodeL)/2;
        update(segTree, pos, val, 2*curr+1, nodeL, mid);
        update(segTree, pos, val, 2*curr+2, mid+1, nodeR);
    }
    return;
}
