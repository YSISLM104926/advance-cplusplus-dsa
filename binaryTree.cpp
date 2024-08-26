#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
    TreeNode(int val) {
        value = val;
        left = NULL;
        right = NULL;
    }
};

void printBinaryTree(struct TreeNode* root){
    if(root == NULL) {
        return;
    }
    // Traverse Left Tree
    printBinaryTree(root->left);
    cout << root->value << " ";
    printBinaryTree(root->right);
}


int main() {
    struct TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    
    // creating left child tree and right child tree
    // Left
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    // Right
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    
    printBinaryTree(root);
    return 0;
    
}
