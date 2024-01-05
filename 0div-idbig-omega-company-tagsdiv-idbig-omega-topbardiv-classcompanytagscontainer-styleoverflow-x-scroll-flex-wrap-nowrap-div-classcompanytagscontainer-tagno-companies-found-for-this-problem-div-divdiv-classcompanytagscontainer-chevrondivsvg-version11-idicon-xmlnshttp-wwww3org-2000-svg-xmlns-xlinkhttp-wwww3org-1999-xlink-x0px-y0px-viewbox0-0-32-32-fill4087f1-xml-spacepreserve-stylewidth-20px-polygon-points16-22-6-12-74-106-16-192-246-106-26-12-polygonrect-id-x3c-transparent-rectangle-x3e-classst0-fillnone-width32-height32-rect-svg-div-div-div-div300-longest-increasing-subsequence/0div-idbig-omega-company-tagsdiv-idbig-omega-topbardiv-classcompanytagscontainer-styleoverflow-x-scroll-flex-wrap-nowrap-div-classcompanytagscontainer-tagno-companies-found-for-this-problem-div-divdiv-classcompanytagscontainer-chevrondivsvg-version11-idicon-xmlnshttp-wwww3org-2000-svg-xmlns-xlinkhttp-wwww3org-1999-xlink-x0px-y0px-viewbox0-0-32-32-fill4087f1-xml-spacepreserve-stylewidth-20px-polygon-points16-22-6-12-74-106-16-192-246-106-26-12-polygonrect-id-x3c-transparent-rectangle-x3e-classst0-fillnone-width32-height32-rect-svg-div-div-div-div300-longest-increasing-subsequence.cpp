class Solution {
public:
    int dp[2501][2502];
    int solve(vector<int>& nums, int si, int pi){
        if(si>=nums.size()) return 0;

        if(dp[si][pi+1]!=-1) return dp[si][pi+1];

        int a = 0;

        if(pi==-1 || nums[si]>nums[pi]){
            a = 1+solve(nums,si+1,si);
        }

        return dp[si][pi+1] = max(a, solve(nums,si+1,pi));
    }
    int lengthOfLIS(vector<int>& nums) {

        memset(dp,-1,sizeof(dp));
        
        return solve(nums,0,-1);
    }
};