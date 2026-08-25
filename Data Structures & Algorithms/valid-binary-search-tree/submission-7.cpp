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
    vector<int> nodes;

    bool isValidBST(TreeNode* root) {
        nodes.clear();
        traverse(root);
        for (int i = 1; i < nodes.size(); ++i) {
            if (nodes[i] <= nodes[i-1]) {
                return false;
            }
        }
        return true;
    }

    void traverse(TreeNode* root) {
        if (root == nullptr) {
            return;
        }
        traverse(root->left);
        nodes.push_back(root->val);
        traverse(root->right);
    }


};
