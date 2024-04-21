class Solution {
public:
    bool check(unordered_map<int, vector<int>> &mp, int s, int d, vector<bool>& visited) {
        if(s == d) 
            return true;

        if(visited[s] == true) 
            return false;
        
        visited[s] = true;

        for(auto &node : mp[s]) {
            if(check(mp, node, d, visited) == true) 
                return true;
        }

        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        unordered_map<int, vector<int>> mp;

        vector<bool>visited(n, false);

        for(vector<int>& edge : edges) {
            int u = edge[0];
            int v = edge[1];
            
            mp[u].push_back(v);
            mp[v].push_back(u);

        }
        return check(mp, source, destination, visited);
    }
};
