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
    int findBottomLeftValue(TreeNode* root) {
        if(root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int leftMost = root->val;

        while(!q.empty()){
            int sz = q.size();

            leftMost = q.front()->val;

            for(int i = 0; i< sz; i++){
                TreeNode* fr = q.front();
                q.pop();

                if(fr->left){
                    q.push(fr->left);
                }
                if(fr->right){
                    q.push(fr->right);
                }
            }
        }
        return leftMost;
    }
};