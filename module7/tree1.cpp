#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int data) {
    TreeNode* newNode = new TreeNode();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

TreeNode* insertNode(TreeNode* root, int data) {
    if (root == nullptr) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

void inorder(TreeNode* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << ' ';
        inorder(root->right);
    }
}

void preorder(TreeNode* root) {
    if (root != nullptr) {
        cout << root->data << ' ';
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(TreeNode* root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << ' ';
    }
}

int main() {
    TreeNode* root = nullptr;
    int nodes[] = {10, 6, 15, 3, 8, 12, 17};
    for (int data : nodes) {
        root = insertNode(root, data);
    }

    cout << "Inorder traversal: ";
    inorder(root);
    cout << "\nPreorder traversal: ";
    preorder(root);
    cout << "\nPostorder traversal: ";
    postorder(root);

    return 0;
}
