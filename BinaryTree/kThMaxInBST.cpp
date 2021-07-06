void inOrder(Node *root, ArrayList* res) {
    if (root != nullptr) {
        inOrder(root -> left, res);
        res -> insert(root -> data);
        inOrder(root -> right, res);
    }
    return;
}

int kthMax(Node *root, int k, int n) {
    ArrayList * inorderTraversal = new ArrayList(n);
    inOrder(root, inorderTraversal);
    return inorderTraversal->getAt(n-k);
}
