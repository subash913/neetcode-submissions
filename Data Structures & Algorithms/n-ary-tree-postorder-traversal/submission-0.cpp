/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> nodes;
        dfs(root, nodes);
        return nodes;
    }

    void dfs(Node* root, vector<int>& nodes) {
        if (root == nullptr) {
            return;
        }
        for (int i = 0; i < root->children.size(); ++i) {
            dfs(root->children[i], nodes);
        }
        nodes.push_back(root->val);
    }
};