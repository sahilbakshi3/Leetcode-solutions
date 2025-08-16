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
    
    // void solve(TreeNode* left, TreeNode* right, int level){
        
    //     if(left == NULL || right == NULL){
    //         return ;
    //     }

    //     if(level %2 != 0){
    //         swap(left->val, right->val);
    //     }

    //     solve(left->left, right->right, level+1);
    //     solve(left->right, right->left, level+1);
    // }
    
    TreeNode* reverseOddLevels(TreeNode* root) {
        // solve(root->left, root->right, 1);

        if (!root) return root;

        queue<TreeNode*> q;
        q.push(root);
        int level = 0;

        while (!q.empty()) {
            int size = q.size();
            vector<TreeNode*> nodes;

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front(); q.pop();
                nodes.push_back(node);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            if (level % 2 != 0) {
                int l = 0, r = nodes.size()-1;
                while(l < r){

                    swap(nodes[l]->val, nodes[r]->val);
                    l++;
                    r--;
                }
            }
            level++;
        }
        return root;

        
    }
};