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
    bool isCompleteTree(TreeNode* root) {


        bool past = false;

        queue<TreeNode*> q;

        q.push(root);

        while(!q.empty()){
            TreeNode* fr = q.front();
            q.pop();

            if(fr == NULL){
                past = true;
            }
            else{
                if(past == true){
                    return false;
                }
                q.push(fr->left);
                q.push(fr->right);
            }
        }

        return true;
    }
};