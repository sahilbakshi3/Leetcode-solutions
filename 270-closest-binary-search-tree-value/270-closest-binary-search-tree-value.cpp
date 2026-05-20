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
    int closestValue(TreeNode* root, double target) {

        int closest = root->val;

        while (root != NULL) {

            double currDiff = abs(root->val - target);
            double bestDiff = abs(closest - target);

            if (currDiff < bestDiff) {
                closest = root->val;
            }
            else if (currDiff == bestDiff) {
                closest = min(closest, root->val);
            }

            if (target < root->val) {
                root = root->left;
            }
            else {
                root = root->right;
            }
        }

        return closest;
    }
};
