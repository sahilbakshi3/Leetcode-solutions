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

    int dfs(TreeNode* root, vector<vector<int>>& ans) {

        if (root == NULL) {
            return -1;
        }

        int leftHeight = dfs(root->left, ans);
        int rightHeight = dfs(root->right, ans);

        int currHeight = 1 + max(leftHeight, rightHeight);

        if (currHeight == ans.size()) {
            ans.push_back({});
        }

        ans[currHeight].push_back(root->val);

        return currHeight;
    }

    vector<vector<int>> findLeaves(TreeNode* root) {

        vector<vector<int>> ans;

        dfs(root, ans);

        return ans;
    }
};
