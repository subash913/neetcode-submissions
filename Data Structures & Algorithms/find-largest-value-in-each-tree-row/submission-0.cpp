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
    vector<int> largestValues(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<int> out;
        if (root == nullptr) {
            return out;
        }
        while(!q.empty()) {
            int max = q.front()->val;
            int x = q.size();
            for (int i = 0; i < x; ++i) {
                TreeNode* temp = q.front();
                q.pop();
                if (temp->left != nullptr) {
                    q.push(temp->left);
                }
                if (temp->right != nullptr) {
                    q.push(temp->right); 
                }
                if (temp->val > max) {
                    max = temp->val;
                }
                
            }
            out.push_back(max);
        }
        return out;
    }
};
