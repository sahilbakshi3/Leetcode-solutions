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
    
    int ans = INT_MIN;
    unordered_map<TreeNode*, int> mp;

    int maxDown(TreeNode* root){
        if(!root){
            return 0;
        }

        if(mp.count(root)){
            return mp[root];
        }

        int left = maxDown(root->left);
        int right = maxDown(root->right);

        return mp[root] = max({left + root->val, right + root->val, root->val});

    }

    void dfs(TreeNode* root){
        if(!root) return ;

        int leftDown = max(0, maxDown(root->left));
        int rightDown = max(0, maxDown(root->right));

        ans = max(ans, root->val + leftDown + rightDown);

        dfs(root->left);
        dfs(root->right);

    }

    int solve(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int left = max(0, solve(root->left));
        int right = max(0, solve(root->right));

        ans = max(ans, root->val + left + right);

        return root->val + max(left, right);
    }
    
    int maxPathSum(TreeNode* root) {
        
        // dfs(root);

        solve(root);

        return ans;

    }
};