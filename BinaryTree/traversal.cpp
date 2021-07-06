#include <bits/stdc++.h>
using namespace std;

class Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    } 
}

class Tree {
    Node root;
    Tree(int val) {
        root = new Node(val);
    }
}

void inorder(Node *root) {
    if (root != nullptr) {
        inorder(root -> left);
        cout << root -> data << endl;
        inorder(root -> right);
}

void preorder(Node *root) {
    if (root != nullptr) {
        cout << root -> data << endl;
        inorder(root -> left);
        inorder(root -> right);
}

void postorder(Node *root) {
    if (root != nullptr) {
        inorder(root -> left);
        inorder(root -> right);
        cout << root -> data << endl;
}

queue<int> q;

void levelOrder(Node *root) {
    if (!q.empty()) {
        q.push(q.front() -> left);
        q.push(q.front() -> right);
        q.pop();
    }
    else{
        queue.push(root);
    }
}
