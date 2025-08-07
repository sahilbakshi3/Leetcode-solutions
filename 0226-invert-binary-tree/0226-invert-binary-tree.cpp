/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // if(root != NULL){
        //     invertTree(root->left);
        //     invertTree(root->right);
        //     swap(root->left, root->right);

        // }
        // return root;

        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty()){
            TreeNode* temp = st.top();
            st.pop();

            if(temp != NULL){
                st.push(temp->right);
                st.push(temp->left);
                swap(temp->left, temp->right);
            }
        }
        return root;
    }
};