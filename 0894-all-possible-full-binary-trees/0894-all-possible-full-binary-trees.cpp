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
    
    vector<TreeNode*> solve(int n, vector<vector<TreeNode*>> &dp){
        if(n % 2 == 0){
            return {};
        }

        if(n == 1){
            return {new TreeNode(0)};
        }

        if(!dp[n].empty()){
            return dp[n];   
        }

        vector<TreeNode*> res;

        for(int i = 1; i < n; i += 2){
            
            vector<TreeNode*> left_fbt = solve(i, dp);
            vector<TreeNode*> right_fbt = solve(n - 1 - i, dp);

            for(auto &l : left_fbt){
                for(auto &r : right_fbt){
                    
                    TreeNode* temp = new TreeNode(0);
                    temp->left = l;
                    temp->right = r;

                    res.push_back(temp);

                }
            }

        }

        return dp[n] = res;

    }
    
    vector<TreeNode*> allPossibleFBT(int n) {

        vector<vector<TreeNode*>> dp(n + 1);

        return solve(n, dp);
    }
};