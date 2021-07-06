int findMin(Node *root) {
    if (root == nullptr) {
        return -1;
    }
    if (root -> left == nullptr) {
        return root -> data;
    }
    return findMin(root -> left);
}
