// program for preorder, inorder and postorder traversal of a tree

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode (int value) {
        val = value;
        left = right = NULL;
    }
};

void preorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    cout << root->val << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

void postorderTraversal(TreeNode* root) {
    if (root == NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->val << " ";
}

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(30);
    root->right = new TreeNode(50);
    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(70);
    root->left->right->left = new TreeNode(60);
    root->right->left = new TreeNode(40);
    root->right->left->right = new TreeNode(80);
    root->right->right = new TreeNode(100);

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;

    return 0;
}