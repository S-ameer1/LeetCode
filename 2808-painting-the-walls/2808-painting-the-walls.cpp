class Solution {
public:
   const int inf = 1e9;
    int dp[505][1010];
    
    int run(int id, int t, int n, vector<int> &cost, vector<int> &time) {
        if(id == n) return t >= 500 ? 0 : inf;
        int &res = dp[id][t];
        if(res != -1) return res;
        
        res = inf;
        if(t - 500 >= n - id) {
            res = 0;
            return res;
        }
        
        res = min(res, run(id + 1, min(t + time[id], 1000), n, cost, time));
        if(res != inf) res += cost[id];
        res = min(res, run(id + 1, t - 1, n, cost, time));
        
        return res;
    }
    
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = cost.size();
        memset(dp, -1, sizeof(dp));
        int res = run(0, 500, n, cost, time);
        return res;
    }
};