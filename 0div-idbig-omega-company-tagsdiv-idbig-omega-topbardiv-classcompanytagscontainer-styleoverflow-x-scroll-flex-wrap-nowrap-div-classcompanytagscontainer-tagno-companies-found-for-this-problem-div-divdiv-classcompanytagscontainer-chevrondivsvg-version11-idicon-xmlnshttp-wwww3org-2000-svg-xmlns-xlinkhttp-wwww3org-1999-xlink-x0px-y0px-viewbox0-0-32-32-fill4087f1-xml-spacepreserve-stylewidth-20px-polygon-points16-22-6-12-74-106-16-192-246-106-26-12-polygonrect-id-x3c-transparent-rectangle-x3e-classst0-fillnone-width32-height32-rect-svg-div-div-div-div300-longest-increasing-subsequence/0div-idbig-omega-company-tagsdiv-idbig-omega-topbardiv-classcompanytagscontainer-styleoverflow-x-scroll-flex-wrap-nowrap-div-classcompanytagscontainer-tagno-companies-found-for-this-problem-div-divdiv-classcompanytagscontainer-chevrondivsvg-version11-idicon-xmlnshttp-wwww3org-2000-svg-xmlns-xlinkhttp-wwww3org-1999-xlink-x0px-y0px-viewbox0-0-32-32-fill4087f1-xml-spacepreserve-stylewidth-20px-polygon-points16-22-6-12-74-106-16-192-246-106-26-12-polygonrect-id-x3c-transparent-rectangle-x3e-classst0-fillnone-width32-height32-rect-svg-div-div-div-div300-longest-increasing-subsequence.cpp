class Solution {
public:
    int help(int ind,int prev_ind,vector<int>&nums,vector<vector<int>>&dp){
        if(ind>=nums.size()){
            return 0;
        }
        if(dp[ind][prev_ind+1]!=-1){
            return dp[ind][prev_ind+1];
        }
        int take=0;
        if(prev_ind==-1){
            take=1+help(ind+1,ind,nums,dp);
        }
        else{
            if(nums[ind]>nums[prev_ind]){
                take=1+help(ind+1,ind,nums,dp);
            }
        }
        int nontake=0+help(ind+1,prev_ind,nums,dp);
        return dp[ind][prev_ind+1]=max(take,nontake);
    }
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size(),-1));
        return help(0,-1,nums,dp);
    }
};