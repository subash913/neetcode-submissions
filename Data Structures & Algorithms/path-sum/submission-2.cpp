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
    bool b;
    int target;
    bool hasPathSum(TreeNode* root, int targetSum) {
        b = false;
        target = targetSum;
        if (root == nullptr) {
            return false;
        }
        dfs(root, 0);
        return b;
    }

    void dfs(TreeNode* root, int sum) {
        sum += root->val;
        if (root->left == nullptr && root->right == nullptr) {
            if (sum == target) {
                b = true;
            }
            return;
        }
        if (root->left != nullptr) {
            dfs(root->left, sum);
        }
        if (root->right != nullptr) {
            dfs(root->right, sum);
        }
        
    }
};