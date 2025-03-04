// Declare a tree structure and enter the values

#include <iostream>
using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode (int value) {
        data = value;
        left = right = NULL;
    }
};

int main() {
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(50);
    root->right->left = new TreeNode(60);
    root->right->right = new TreeNode(70);
    cout << "Root Node: " << root->data<<"\n"<<"Left child: " <<root->left->data<<"\n"<<"Right child: " <<root->right->data
    <<"\n"<<"Lefttree L.SubChild: " <<root->left->left->data<<"\n"<<"Lefttree R.SubChild: " <<root->left->right->data<<"\n"<<"Righttree L.SubChild: " <<
    root->right->left->data<<"\n"<<"Righttree R.SubChild: " <<root->right->right->data<<endl;
    return 0;
}