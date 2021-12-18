#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Tree {
    public:
    Node* root;
    Tree() {
        root = nullptr;
    }
    
    void inorder(Node* root) {
        if (root == nullptr) {
            return;
        }
        inorder (root -> left);
        cout << root -> data << " ";
        inorder (root -> right);
    }
    
    void preorder(Node* root) {
        if (root == nullptr) {
            return;
        }
        cout << root -> data << " ";
        preorder (root -> left);
        preorder (root -> right);
    }
    
    void postorder(Node* root) {
        if (root == nullptr) {
            return;
        }
        postorder (root -> left);
        postorder (root -> right);
        cout << root -> data << " ";
    }
    
    vector<vector<int>> levelorder(Node* root) {
        queue<Node*> bfs;
        bfs.push(root);
        vector<vector<int>> traversal;
        if (root == nullptr) {
            return traversal;
        }
        while (!bfs.empty()) {
            int n = bfs.size();
            vector<int> level;
            for (int i = 0; i < size; i += 1) {
                Node* frontNode = bfs.front();
                bfs.pop();
                level.push_back(frontNode -> data);
                if (frontNode -> left != nullptr)
                    bfs.push(frontNode -> left);
                if (frontNode -> right != nullptr)
                    bfs.push(frontNode -> right);
            }
            traversal.push_back(level);
        }
        return traversal;
    }
    
    void preorderIter(Node* root) {
        if (root == nullptr) {
            return;
        }
        stack<Node*> dfs;
        dfs.push(root);
        while(!stack.empty()) {
            Node* topNode = dfs.top();
            dfs.pop()
            cout << topNode -> data;
            if (topNode -> right != nullptr) {
                dfs.push(topNode -> right);
            }
            if (topNode -> left != nullptr) {
                dfs.push(topNode -> left);
            }
        }
    }
    
    
    void inorderIter(Node* root) {
        stack<Node*> dfs;
        Node *node = root;
        while (true) {
            if (node != nullptr) {
                dfs.push(node);
                node = node -> left;
            }
            else {
                if (dfs.empty()) {
                    return;
                }
                node = dfs.top();
                cout << node -> data;
                dfs.pop();
                node = node -> right;
            }
        }
    }
    
    void postorderIter(Node* root) {
        Node* node = root;
        stack<Node*> s1;
        stack<Node*> s2;
        s1.push(root);
        while (!s1.empty()) {
            Node* curr = s1.top();
            s1.pop();
            s2.push(curr);
            if (curr -> left != nullptr) {
                s1.push(curr -> left);
            }
            if (curr -> right != nullptr) {
                s1.push(curr -> right);
            }
        }
        while (!s2.empty()) {
            cout << s2.top() << endl;
            s2.pop();
        }
    }
    
    void prepostin(Node* root) {
        stack<pair<Node*, int>> dfs;
        vector<int> inorder;
        vector<int> postorder;
        vector<int> preorder;
        dfs.push({root, 1});
        while(!dfs.empty()) {
            Node* curr = dfs.top().first();
            int num = dfs.top().second();
            if (num == 1) {
                preorder.push_back(curr);
                dfs.pop();
                dfs.push({curr, num+1});
                if (curr -> left != nullptr) {
                    dfs.push((curr -> left, num));
                }
            }
            else if (num == 2) {
                inorder.push_back(curr);
                dfs.pop();
                dfs.push({curr, num+1});
                if (curr -> right != nullptr) {
                    dfs.push((curr -> right, num));
                }
            }
            else () {
                postorder.push_back(curr);
                dfs.pop();
            }
        }
    }
    
    int maxDepth(Node* root) {
        if (root == nullptr) {
            return 0;
        }
        int leftMax = maxDepth(root -> left);
        int rightMax = maxDepth(root -> right);
        return 1 + max(leftMax, rightMax);
    }
    
    bool checkBalanced(Node* root) {
        if (root == nullptr) {
            return true;
        }
        int leftMax = maxDepth(root -> left);
        int rightMax = maxDepth(root -> right);
        if (abs(leftMax - rightMax) > 1) {
            return false;
        }
        bool leftBalance = checkBalanced(root -> left);
        bool rightBalance = checkBalanced(root -> right);
        return leftBalance && rightBalanced;
    }
};




int main()
{
   cout << "Hello World" << endl; 
   
   return 0;
}
