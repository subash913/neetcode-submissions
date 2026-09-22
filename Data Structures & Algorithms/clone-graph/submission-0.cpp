/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) {
            return node;
        }
        unordered_map<Node*, Node*> visited;
        return dfs(node, visited);
    }

    Node* dfs(Node* node, unordered_map<Node*, Node*>& visited) {
        if (visited.contains(node)) {
            return visited[node];
        }
        Node* c = new Node(node->val);
        visited[node] = c;
        for (int i = 0; i < node->neighbors.size(); ++i) {    
            c->neighbors.push_back(dfs(node->neighbors[i], visited));
            
        }
        return c;
    }
};
