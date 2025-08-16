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
    bool isEvenOddTree(TreeNode* root) {
        if(root == NULL){
            return false;
        }

        queue<TreeNode*> q;
        q.push(root);
        int lvl = 0;

        while(!q.empty()){
            int n = q.size();
            vector<int> temp;

            for(int i = 0; i< n; i++){
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);

                if(node->left){
                    q.push(node->left);
                }
                if(node->right){
                    q.push(node->right);
                }
            }
            if(lvl == 0 || lvl %2 == 0){
                // even lvl
                for(int i = 0; i< temp.size(); i++){
                    if(temp[i]%2 == 0){
                        return false;
                    }
                }
                for(int i = 0; i< temp.size()-1; i++){
                    if(temp[i] >= temp[i+1]){
                        return false;
                    }
                }
            }

            else{
                // odd lvl
                for(int i = 0; i< temp.size(); i++){
                    if(temp[i] % 2 != 0){
                        return false;
                    }
                    
                }
                for(int i = 0; i< temp.size()-1; i++){
                    if(temp[i] <= temp[i+1]){
                        return false;
                    }
                }
            }

            lvl++;
        }
        return true;
    }
};