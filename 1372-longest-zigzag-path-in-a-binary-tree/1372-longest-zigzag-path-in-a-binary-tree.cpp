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

    int ans = 0;
    
    // void solve(TreeNode* root, bool goLeft, int steps){
    //     if(root == NULL){
    //         return;
    //     }

    //     ans = max(ans, steps);

    //     if(goLeft == true){
    //         solve(root->left, false, steps + 1);
    //         solve(root->right, true, 1);
    //     }
    //     else{
    //         solve(root->right, true, steps + 1);
    //         solve(root->left, false, 1);
    //     }

    // }

    void solve(TreeNode* root, int left, int right){
        if(root == NULL){
            return;
        }

        ans = max({ans, right, left});

        solve(root->left, right + 1, 0);
        solve(root->right, 0, left + 1);

    }
    
    int longestZigZag(TreeNode* root) {
        // solve(root, true, 0);
        // solve(root, false, 0);

        solve(root, 0, 0);

        return ans;
    }
};