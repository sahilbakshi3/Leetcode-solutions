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
    double ans = 0.0;

    pair<int, int> dfs(TreeNode* root) {

        if (root == NULL) {
            return {0, 0};
        }

        auto left = dfs(root->left);
        auto right = dfs(root->right);

        int sum = left.first + right.first + root->val;
        int count = left.second + right.second + 1;

        double avg = (double)sum / count;

        ans = max(ans, avg);

        return {sum, count};
    }

    double maximumAverageSubtree(TreeNode* root) {

        dfs(root);

        return ans;
    }
};
