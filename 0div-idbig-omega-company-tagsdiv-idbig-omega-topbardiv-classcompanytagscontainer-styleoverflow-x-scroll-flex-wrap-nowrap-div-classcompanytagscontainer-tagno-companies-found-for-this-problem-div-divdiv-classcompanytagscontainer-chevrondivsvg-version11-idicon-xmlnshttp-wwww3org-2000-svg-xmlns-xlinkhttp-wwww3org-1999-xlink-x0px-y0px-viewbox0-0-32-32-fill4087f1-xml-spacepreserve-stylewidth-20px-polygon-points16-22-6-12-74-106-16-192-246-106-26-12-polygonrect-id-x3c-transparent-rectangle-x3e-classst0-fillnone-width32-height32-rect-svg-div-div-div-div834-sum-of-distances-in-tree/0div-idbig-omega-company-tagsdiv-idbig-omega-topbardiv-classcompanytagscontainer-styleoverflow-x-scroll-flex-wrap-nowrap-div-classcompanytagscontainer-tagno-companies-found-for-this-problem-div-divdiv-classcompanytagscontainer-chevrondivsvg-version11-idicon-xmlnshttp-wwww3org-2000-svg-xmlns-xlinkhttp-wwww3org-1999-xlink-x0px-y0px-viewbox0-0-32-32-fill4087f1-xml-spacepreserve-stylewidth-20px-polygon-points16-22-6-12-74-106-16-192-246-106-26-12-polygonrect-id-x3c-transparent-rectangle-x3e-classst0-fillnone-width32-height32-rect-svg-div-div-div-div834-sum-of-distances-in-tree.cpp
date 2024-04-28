class Solution {
public:
    vector<vector<int>> adj;
    vector < int > sum, cnt;

    void build_adj(int n, vector<vector<int>>&edges){
        adj.resize(n);
        for(auto &e : edges){
            adj[e[1]].push_back(e[0]);
            adj[e[0]].push_back(e[1]);
        }
    }

    void dfs0(int node, int parent = -1){
        for(int adjNode : adj[node]){
            if(adjNode == parent)continue;
            dfs0(adjNode, node);
            cnt[node] += cnt[adjNode];
            sum[node] += sum[adjNode] + cnt[adjNode];
        }
    }

    void reroot(int node, int parent, int n){
        for(int adjNode : adj[node]){
            if(adjNode == parent)continue;
            sum[adjNode] = sum[node] + n - 2*cnt[adjNode];
            reroot(adjNode, node, n);
        }
    }

    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        build_adj(n, edges);
        sum.assign(n, 0);
        cnt.assign(n, 1);
        dfs0(0);
        reroot(0, -1, n);
        return sum;
    }
};