class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> parent(edges.size() + 1);
        vector<int> size(edges.size() + 1,1);
        vector<vector<int>> edges2;
        for (int i = 0; i < parent.size(); ++i) {
            parent[i] = i;
        }
        for (int i = 0; i < edges.size(); ++i) {
            if (!unite(edges[i][0], edges[i][1], parent, size)) {
                edges2.push_back(edges[i]);
            }
        }
        if (!edges2.empty()) {
            return edges2[edges2.size() - 1];
        } else {
            return {-1};
        }
        
    }

    int find(int node, vector<int>& parent) {
        if (node == parent[node]) {
            return node;
        }
        parent[node] = find(parent[node], parent);
        return parent[node];
    }

    bool unite(int node1, int node2, vector<int>& parent, vector<int>& size) {
        int root1 = find(node1, parent);
        int root2 = find(node2, parent);
        
        if (root1 == root2) {
            return false;
        }
        if (size[root1] < size[root2]) {
            swap(root1, root2);
        }
        parent[root2] = root1;
        size[root1] += size[root2];
        return true;
    }
};
