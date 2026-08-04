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
    vector<int> array;
    int kthSmallest(TreeNode* root, int k) {
        helper(root, k);
        return array[k-1];
    }
    void helper(TreeNode* root, int k) {
       if (root == nullptr || array.size() >= k) {
            return;
        }
        helper(root->left, k);
        array.push_back(root->val);
        if (array.size() >= k) {
            return;
        }
        helper(root->right, k); 
    }
};
