/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int a = p->val, b = q->val;

        TreeNode * curr = root;

        while(curr){
            if(a < curr->val && b < curr->val){
                curr = curr->left;
            }
            else if(a > curr->val && b > curr->val){
                curr = curr->right;
            }
            else{
                return curr;
            }
        }
        return nullptr;
    }
};