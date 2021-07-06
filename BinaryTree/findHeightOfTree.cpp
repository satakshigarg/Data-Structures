int findHeight(Node* root) {
    if (root == nullptr) {
        return -1;
    }
    int height = 1 + max(findHeight(root -> left), findHeight(root -> right));
    return height;
}
