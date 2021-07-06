vector<vector<int>> levels;

void levelOrder(Node *root) {
    queue<Node *> q;
    if (q.empty()) {
        if (root != nullptr) {
            q.push(root);
        }
        else {
            return;
        }
    }
    while (!q.empty()) {
        vector<int> temp;
        int levelSize = q.size();
        for (int i = 0; i < levelSize; i++) {
            if (q.front() -> left != nullptr) {
                q.push(q.front()->left);
            }
            if (q.front() -> right != nullptr) {
                q.push(q.front()->right);
            }
            temp.push_back(q.front());
            q.pop();
        }
        levels.push_back(temp);
    }
}


vector<int> findKNode(Node* root, int k) {
    levelOrder(root);
    return levels[k-1];
}
