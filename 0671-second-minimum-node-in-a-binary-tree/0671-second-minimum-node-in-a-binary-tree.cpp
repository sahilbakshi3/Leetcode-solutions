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
    
    int dfs(TreeNode* root, int minVal) {
        if (!root) return -1;

        if (root->val > minVal) return root->val;

        int left = dfs(root->left, minVal);
        int right = dfs(root->right, minVal);

        if (left == -1) return right;
        if (right == -1) return left;
        return min(left, right);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        return dfs(root, root->val);
    }
};