class Solution {
public:
     vector<vector<int>>dp;
    int mod = 1000000007;
    int solve(int steps,int arrLen,int i){
        if(i < 0 || i >= arrLen)
            return 0;
        if(dp[i][steps] != -1)
            return dp[i][steps];
        if(steps == 0)
            return i == 0;
        long long ans = ((solve(steps-1,arrLen,i+1) + solve(steps-1,arrLen,i-1))%mod+solve(steps-1,arrLen,i)%mod);
        return dp[i][steps] = (int)ans%mod;
    }
    int numWays(int steps, int arrLen) {
        arrLen = min(arrLen, steps);
        dp = vector<vector<int>>(arrLen,vector<int>(steps+1,-1));
        return solve(steps,arrLen,0);
    }
};