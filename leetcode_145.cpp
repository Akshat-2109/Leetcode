#include<iostream>
#include<vector>
#include<stack>
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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;

        if (root == NULL) return ans;

        stack<TreeNode*> st1, st2;

        st1.push(root);

        while (!st1.empty()) {
            TreeNode* node = st1.top();
            st1.pop();

            st2.push(node);

            if (node->left)
                st1.push(node->left);

            if (node->right)
                st1.push(node->right);
        }

        while (!st2.empty()) {
            ans.push_back(st2.top()->val);
            st2.pop();
        }

        return ans;
    }
};