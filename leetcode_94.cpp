// Binary Tree Inorder Traversal
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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> st;

        TreeNode* node = root;
        while(node != NULL || !st.empty()){
            while(node != NULL){
                st.push(node);
                node = node->left;
            }
            node = st.top();
            st.pop();
            ans.push_back(node->val);

            node = node->right;
        }
        return ans;
    }
};