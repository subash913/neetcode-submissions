class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<int> parent(n);
        for (int i = 0; i < n; ++i) {
            parent[i] = i;
        }
        int components = n;
        for (int i = 0; i < edges.size(); ++i) {
            unite(edges[i][0], edges[i][1], parent, components);
        }
        return components;
    }

    int find(int node, vector<int>& parent) {
        if (node == parent[node]) {
            return node;
        }
        return find(parent[node], parent);
    }

    void unite(int a, int b, vector<int>& parent, int& x) {
        int rootA = find(a, parent);
        int rootB = find(b, parent);

        if (rootA != rootB) {
            parent[rootB] = rootA;
            x--;
        }
    }
};
