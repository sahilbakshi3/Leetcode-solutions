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
    
    bool solve(TreeNode* root, int sum, int &targetSum){
        if(root == NULL) return false;

        sum += root->val;

        if(root->left == NULL && root->right == NULL){
            if(sum == targetSum){
                return true;
            }
        }

        bool leftSide = solve(root->left, sum, targetSum);
        bool rightSide = solve(root->right, sum, targetSum);

        return leftSide || rightSide;

    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        int sum = 0;
        int res = solve(root, sum, targetSum);

        return res;
    }
};