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
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        
        // int ld = maxDepth(root->left);
        // int rd = maxDepth(root->right);

        // return max(ld, rd)+1;
        int ans = 0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            ans++;
            int n = q.size();

            for(int i = 0; i< n; i++){
                TreeNode* fr = q.front();
                q.pop();

                if(fr->left != NULL){
                    q.push(fr->left);
                }
                if(fr->right != NULL){
                    q.push(fr->right);
                }
            }
        }
        return ans;
    }
};