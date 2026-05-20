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

    bool isLeaf(TreeNode* node) {

        return node->left == NULL && node->right == NULL;
    }

    void addLeftBoundary(TreeNode* node, vector<int>& ans) {

        TreeNode* curr = node->left;

        while (curr) {

            if (!isLeaf(curr)) {
                ans.push_back(curr->val);
            }

            if (curr->left) {
                curr = curr->left;
            }
            else {
                curr = curr->right;
            }
        }
    }

    void addLeaves(TreeNode* node, vector<int>& ans) {

        if (node == NULL) {
            return;
        }

        if (isLeaf(node)) {
            ans.push_back(node->val);
            return;
        }

        addLeaves(node->left, ans);
        addLeaves(node->right, ans);
    }

    void addRightBoundary(TreeNode* node, vector<int>& ans) {

        TreeNode* curr = node->right;

        vector<int> temp;

        while (curr) {

            if (!isLeaf(curr)) {
                temp.push_back(curr->val);
            }

            if (curr->right) {
                curr = curr->right;
            }
            else {
                curr = curr->left;
            }
        }

        reverse(temp.begin(), temp.end());

        for (int val : temp) {
            ans.push_back(val);
        }
    }

    vector<int> boundaryOfBinaryTree(TreeNode* root) {

        vector<int> ans;

        if (root == NULL) {
            return ans;
        }

        if (!isLeaf(root)) {
            ans.push_back(root->val);
        }

        addLeftBoundary(root, ans);

        addLeaves(root, ans);

        addRightBoundary(root, ans);

        return ans;
    }
};
