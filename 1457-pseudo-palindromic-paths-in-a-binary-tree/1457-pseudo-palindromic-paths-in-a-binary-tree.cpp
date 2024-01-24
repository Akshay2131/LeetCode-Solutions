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
    int ans = 0;
    int pseudoPalindromicPaths (TreeNode* root) {
        helper(root, 0);
     return ans;
    }
    void helper(TreeNode* root, int p) {
        p ^= (1 << root -> val);
        if(root->left == NULL && root->right == NULL) {
            if((p & p-1) == 0) ans++;
            return;
        }
        if(root -> left) helper(root -> left, p);
        if(root -> right) helper(root -> right, p);
    }
};