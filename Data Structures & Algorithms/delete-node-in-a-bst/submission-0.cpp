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
    TreeNode* deleteNode(TreeNode* root, int key) {
        del(root,key);
        return root;
    }
    
    void del(TreeNode*& node, int key) {
        if (node == nullptr) {
            return;
        }
        if (node->val == key) {
            if (node->left == nullptr && node->right == nullptr) {
                node = nullptr;
            } else if (node->left == nullptr) {
                node = node->right;
            } else if (node->right == nullptr) {
                node = node->left;
            } else {
                TreeNode* temp = node->left;
                while (temp->right != nullptr) {
                    temp = temp->right;
                }
                swap(node->val, temp->val);
                del(node->left, key);
            }
        } else if (node->val > key) {
            del(node->left, key);
        } else {
            del(node->right, key);
        }
    }
};