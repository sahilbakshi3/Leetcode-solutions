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
    
    vector<TreeNode*> solve(int start, int end, map<pair<int, int>, vector<TreeNode*>> &dp){

        if(start > end){
            return {NULL};
        }

        if(dp.count({start, end})){
            return dp[{start, end}];
        }

        if(start == end){
            TreeNode* root = new TreeNode(start);
            return {root};
        }

        vector<TreeNode*> res;

        for(int i = start; i <= end; i++){

            vector<TreeNode*> left_bst = solve(start, i - 1, dp);
            vector<TreeNode*> right_bst = solve(i + 1, end, dp);

            for(TreeNode* leftRoot: left_bst){

                for(TreeNode* rightRoot: right_bst){

                    TreeNode* root = new TreeNode(i);

                    root->left = leftRoot;
                    root->right = rightRoot;

                    res.push_back(root);
                }
            }
        }

        return dp[{start, end}] = res;

    }
    
    vector<TreeNode*> generateTrees(int n) {

        map<pair<int, int>, vector<TreeNode*>> dp;

        return solve(1, n, dp);
    }
};