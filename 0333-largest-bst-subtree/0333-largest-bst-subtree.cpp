/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:

    int ans = 0;

    vector<int> dfs(TreeNode* root) {

        if (root == NULL) {

            return {INT_MAX, INT_MIN, 0};
        }

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        if (left[1] < root->val &&
            root->val < right[0]) {

            int size = left[2] + right[2] + 1;

            ans = max(ans, size);

            int mn = min(root->val, left[0]);
            int mx = max(root->val, right[1]);

            return {mn, mx, size};
        }

        return {INT_MIN, INT_MAX, 0};
    }

    int largestBSTSubtree(TreeNode* root) {

        dfs(root);

        return ans;
    }
};
