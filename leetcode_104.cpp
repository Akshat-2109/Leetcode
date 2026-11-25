// Maximum Depth of Binary Tree
#include<iostream>
#include<vector>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;

        int pre = maxDepth(root->left);
        int post = maxDepth(root->right);
        return max(pre, post) + 1;
    }
};