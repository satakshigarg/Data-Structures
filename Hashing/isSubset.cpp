bool isSubset(int *arr1, int *arr2, int n, int m) {
    unordered_set<int> arrSet;
    for (auto x: arr1) {
        arrSet.insert(x);
    }
    for (auto x: arr2) {
        if (arrSet.find(x) == arrSet.end()) {
            return false;
        }
    }
    return true;
}
