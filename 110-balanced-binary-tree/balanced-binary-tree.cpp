class Solution {
public:
    int checkHeight(TreeNode* root) {
        if (root == nullptr) return 0;

        int lh = checkHeight(root->left);
        if (lh == -1) return -1;

        int rh = checkHeight(root->right);
        if (rh == -1) return -1;

        if (abs(lh - rh) > 1) return -1;

        return 1 + max(lh, rh);
    }

    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};
