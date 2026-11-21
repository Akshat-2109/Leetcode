// Binary Tree Preorder Traversal
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;

        if(root == NULL) return ans;

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* node = st.top();
            st.pop();

            ans.push_back(node->val);

            if(node->right != NULL){
                st.push(node->right);
            }
            
            if(node->left != NULL){
                st.push(node->left);
            }
            
        }
        return ans;
    }
};