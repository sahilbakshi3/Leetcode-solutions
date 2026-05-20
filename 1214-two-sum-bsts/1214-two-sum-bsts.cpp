/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    void inorder(TreeNode* root, vector<int>& arr) {

        if (root == NULL) {
            return;
        }

        inorder(root->left, arr);

        arr.push_back(root->val);

        inorder(root->right, arr);
    }

    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target) {
        
        vector<int> arr1, arr2;

        inorder(root1, arr1);
        inorder(root2, arr2);

        int i = 0;
        int j = arr2.size() - 1;

        while (i < arr1.size() && j >= 0) {

            int sum = arr1[i] + arr2[j];

            if (sum == target) {
                return true;
            }

            if (sum < target) {
                i++;
            }
            else {
                j--;
            }
        }

        return false;
    }
};
