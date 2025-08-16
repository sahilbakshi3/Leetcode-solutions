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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;

        if(root == NULL) return res;

        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sz = q.size();
            for(int i = 0; i< sz; i++){
                TreeNode* fr = q.front();
                q.pop();

                if(i == sz - 1){
                    res.push_back(fr->val);
                }

                if(fr->left != NULL){
                    q.push(fr->left);
                }
                if(fr->right != NULL){
                    q.push(fr->right);
                }
            }
        }
        return res;
    }
};