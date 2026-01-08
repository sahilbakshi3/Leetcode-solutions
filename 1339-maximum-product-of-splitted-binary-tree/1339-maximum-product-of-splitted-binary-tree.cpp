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

    long long total = 0, ans = 0;

    const long long mod = 1e9 + 7;
    
    int totalSum(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        return root->val + totalSum(root->left) + totalSum(root->right);  
    }

    int solve(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        long long left = solve(root->left);
        long long right = solve(root->right);

        long long subTreeSum = left + right + root->val;

        long long secondSubtree = total - subTreeSum;

        long long prod = subTreeSum * secondSubtree;

        ans = max(ans, prod);

        return subTreeSum;

        
    }
    
    int maxProduct(TreeNode* root) {
        total = totalSum(root);
        solve(root);

        return ans%mod;

    }
};