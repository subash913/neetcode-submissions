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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* final;
        dfs(final, root1, root2);
        return final;
    }

    void dfs(TreeNode*& final, TreeNode* root1, TreeNode* root2) {
        if (root1 == nullptr) {
            final = root2;
            return;
        }
        if (root2 == nullptr) {
            final = root1;
            return;
        }
        final = new TreeNode(root1->val + root2->val);
        dfs(final->left, root1->left, root2->left);
        dfs(final->right, root1->right, root2->right);

    }
};