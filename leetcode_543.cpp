// Diameter of Binary Tree
#include<iostream>
#include<vector>
#include<queue>
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
    int diameter = 0;

    int height(TreeNode* root) {
        if (root == NULL)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        diameter = max(diameter, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
