// program to search an element k in the given binary search tree

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool searchBST(TreeNode* root, int k) {
    if (root == NULL) 
        return false;

    if (root->val == k) 
        return true;

    if (k < root->val) 
        return searchBST(root->left, k);
    else 
        return searchBST(root->right, k);
}

TreeNode* insert(TreeNode* root, int key) {
    if (root == NULL) 
        return new TreeNode(key);

    if (key < root->val) 
        root->left = insert(root->left, key);
    else 
        root->right = insert(root->right, key);

    return root;
}

int main() {
    TreeNode* root = NULL;

    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 18);

    int k = 11; 
    if (searchBST(root, k)) 
        cout << k << " is present in the BST\n";
    else 
        cout << k << " is not present in the BST\n";

    return 0;
}
