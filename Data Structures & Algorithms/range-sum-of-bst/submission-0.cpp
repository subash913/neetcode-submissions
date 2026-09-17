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
    int l;
    int h;
    int rangeSumBST(TreeNode* root, int low, int high) {
        int start = 0;
        l = low;
        h = high;
        dfs(root, start);
        return start;
    }

    void dfs(TreeNode* root, int& sum) {
        if (root == nullptr) {
            return;
        }
        if (root->val <= h && root->val >= l) {
            sum += root->val;
            cout << sum << endl;
            dfs(root->left, sum);
            dfs(root->right, sum);
        } else if (root->val > h) {
            dfs(root->left, sum);
        } else {
            dfs(root->right, sum);
        }

    }
};