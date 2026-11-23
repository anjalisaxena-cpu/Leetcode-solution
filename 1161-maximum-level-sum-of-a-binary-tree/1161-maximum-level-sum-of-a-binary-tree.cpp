
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN;
        int resultlevel = 1;
        int level = 1;

        queue<TreeNode*> que;
        que.push(root);

        while (!que.empty()) {
            int n = que.size();
            int sum = 0;

            while (n--) {
                TreeNode* temp = que.front();
                que.pop();

                sum += temp->val;

                if (temp->left) {
                    que.push(temp->left);
                }

                if (temp->right) {
                    que.push(temp->right);
                }
            }

            if (sum > maxSum) {
                maxSum = sum;
                resultlevel = level;
            }

            level++;
        }

        return resultlevel;
    }
};
