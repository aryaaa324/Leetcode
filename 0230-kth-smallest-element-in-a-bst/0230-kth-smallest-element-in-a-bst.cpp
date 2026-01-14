class Solution {
public:
    int count = 0;
    int result = -1;

    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return result;
    }

private:
    void inorder(TreeNode* node, int k) {
        if (!node || result != -1)
            return;

        inorder(node->left, k);

        count++;
        if (count == k) {
            result = node->val;
            return;
        }

        inorder(node->right, k);
    }
};
