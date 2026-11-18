
class Solution {
public:
    int solve(TreeNode* root, int arr) {
        if (root == NULL)
            return 0;

        arr = (arr * 10) + root->val;

        if (root->left == NULL && root->right == NULL)
            return arr;

        int l = solve(root->left, arr);
        int r = solve(root->right, arr);

        return l + r;
    }

    int sumNumbers(TreeNode* root) {
        return solve(root, 0);
    }
};
