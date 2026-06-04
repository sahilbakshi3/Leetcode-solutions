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

    // void inorder(TreeNode* root, double target,
    //              int &ans, double &mini) {
    //
    //     if(!root) return;
    //
    //     inorder(root->left, target, ans, mini);
    //
    //     double diff = abs(root->val - target);
    //
    //     if(diff < mini ||
    //       (diff == mini && root->val < ans)) {
    //         mini = diff;
    //         ans = root->val;
    //     }
    //
    //     inorder(root->right, target, ans, mini);
    //
    // }

    int closestValue(TreeNode* root, double target) {

        // Brute Force - O(n), O(n)
        //
        // vector<int> values;
        //
        // function<void(TreeNode*)> dfs = [&](TreeNode* node) {
        //     if(!node) return;
        //
        //     values.push_back(node->val);
        //     dfs(node->left);
        //     dfs(node->right);
        // };
        //
        // dfs(root);
        //
        // int ans = values[0];
        //
        // for(int val : values) {
        //     if(abs(val - target) < abs(ans - target) ||
        //        (abs(val - target) == abs(ans - target) &&
        //         val < ans)) {
        //         ans = val;
        //     }
        // }
        //
        // return ans;


        // Better Solution - O(n), O(h)
        //
        // int ans = root->val;
        // double mini = abs(root->val - target);
        //
        // inorder(root, target, ans, mini);
        //
        // return ans;


        // Optimal Solution - O(h), O(1)

        int ans = root->val;

        while(root) {

            double currDiff = abs(root->val - target);
            double bestDiff = abs(ans - target);

            if(currDiff < bestDiff ||
               (currDiff == bestDiff &&
                root->val < ans)) {
                ans = root->val;
            }

            if(target < root->val) {
                root = root->left;
            }
            else if(target > root->val) {
                root = root->right;
            }
            else {
                return root->val;
            }
        }

        return ans;
    }
};
