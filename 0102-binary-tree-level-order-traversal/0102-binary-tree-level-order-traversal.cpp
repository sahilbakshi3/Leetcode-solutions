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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> res;
        if(root == NULL) return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int size = q.size();
            vector<int> level;

            for(int i = 0; i< size; i++){
                TreeNode* fr = q.front();
                q.pop();

                if(fr->left != NULL){
                    q.push(fr->left);
                }
                if(fr->right != NULL){
                    q.push(fr->right);
                }
                level.push_back(fr->val);
            }
            res.push_back(level);
        }
        return res;
    }
};