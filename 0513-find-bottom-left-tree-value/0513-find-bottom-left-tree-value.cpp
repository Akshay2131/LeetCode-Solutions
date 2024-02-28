class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> queue;
        TreeNode* current = root;
        queue.push(current);

        while (!queue.empty()) {
            current = queue.front();
            queue.pop();
            if (current->right != nullptr) {
                queue.push(current->right);
            }
            if (current->left != nullptr) {
                queue.push(current->left);
            }
        }
        return current->val;
    }
};


