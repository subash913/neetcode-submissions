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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> nodes1;
        vector<int> nodes2;
        dfs(nodes1, root1);
        dfs(nodes2, root2);
        return nodes1 == nodes2;
    }

    void dfs(vector<int>& nodes, TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        if (root->left == nullptr && root->right == nullptr) {
            nodes.push_back(root->val);
            return;
        }
        dfs(nodes, root->left);
        dfs(nodes, root->right);
    }
};
