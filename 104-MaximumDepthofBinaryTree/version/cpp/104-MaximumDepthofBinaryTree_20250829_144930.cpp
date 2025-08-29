// Last updated: 8/29/2025, 2:49:30 PM
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
    private:
    int depth(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int left=depth(root->left);
        int right=depth(root->right);
        return max(left,right)+1;
    }
public:
    int maxDepth(TreeNode* root) {
        int ans=depth(root);
        return ans;
    }
};