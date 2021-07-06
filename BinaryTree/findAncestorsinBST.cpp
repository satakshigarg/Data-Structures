string ancestors = "";
void findAncestors(Node* root, int k) {
    if (root == nullptr) {
        return;
    }
    if (root -> data == k) {
        return;
    }
    else {
        ancestors = to_string(root -> data) + " " + ancestors;
        if (root -> data < k) {
            findAncestors(root -> right);
        }
        else {
            findAncestors(root -> left);
        }
    }
    return;
}
