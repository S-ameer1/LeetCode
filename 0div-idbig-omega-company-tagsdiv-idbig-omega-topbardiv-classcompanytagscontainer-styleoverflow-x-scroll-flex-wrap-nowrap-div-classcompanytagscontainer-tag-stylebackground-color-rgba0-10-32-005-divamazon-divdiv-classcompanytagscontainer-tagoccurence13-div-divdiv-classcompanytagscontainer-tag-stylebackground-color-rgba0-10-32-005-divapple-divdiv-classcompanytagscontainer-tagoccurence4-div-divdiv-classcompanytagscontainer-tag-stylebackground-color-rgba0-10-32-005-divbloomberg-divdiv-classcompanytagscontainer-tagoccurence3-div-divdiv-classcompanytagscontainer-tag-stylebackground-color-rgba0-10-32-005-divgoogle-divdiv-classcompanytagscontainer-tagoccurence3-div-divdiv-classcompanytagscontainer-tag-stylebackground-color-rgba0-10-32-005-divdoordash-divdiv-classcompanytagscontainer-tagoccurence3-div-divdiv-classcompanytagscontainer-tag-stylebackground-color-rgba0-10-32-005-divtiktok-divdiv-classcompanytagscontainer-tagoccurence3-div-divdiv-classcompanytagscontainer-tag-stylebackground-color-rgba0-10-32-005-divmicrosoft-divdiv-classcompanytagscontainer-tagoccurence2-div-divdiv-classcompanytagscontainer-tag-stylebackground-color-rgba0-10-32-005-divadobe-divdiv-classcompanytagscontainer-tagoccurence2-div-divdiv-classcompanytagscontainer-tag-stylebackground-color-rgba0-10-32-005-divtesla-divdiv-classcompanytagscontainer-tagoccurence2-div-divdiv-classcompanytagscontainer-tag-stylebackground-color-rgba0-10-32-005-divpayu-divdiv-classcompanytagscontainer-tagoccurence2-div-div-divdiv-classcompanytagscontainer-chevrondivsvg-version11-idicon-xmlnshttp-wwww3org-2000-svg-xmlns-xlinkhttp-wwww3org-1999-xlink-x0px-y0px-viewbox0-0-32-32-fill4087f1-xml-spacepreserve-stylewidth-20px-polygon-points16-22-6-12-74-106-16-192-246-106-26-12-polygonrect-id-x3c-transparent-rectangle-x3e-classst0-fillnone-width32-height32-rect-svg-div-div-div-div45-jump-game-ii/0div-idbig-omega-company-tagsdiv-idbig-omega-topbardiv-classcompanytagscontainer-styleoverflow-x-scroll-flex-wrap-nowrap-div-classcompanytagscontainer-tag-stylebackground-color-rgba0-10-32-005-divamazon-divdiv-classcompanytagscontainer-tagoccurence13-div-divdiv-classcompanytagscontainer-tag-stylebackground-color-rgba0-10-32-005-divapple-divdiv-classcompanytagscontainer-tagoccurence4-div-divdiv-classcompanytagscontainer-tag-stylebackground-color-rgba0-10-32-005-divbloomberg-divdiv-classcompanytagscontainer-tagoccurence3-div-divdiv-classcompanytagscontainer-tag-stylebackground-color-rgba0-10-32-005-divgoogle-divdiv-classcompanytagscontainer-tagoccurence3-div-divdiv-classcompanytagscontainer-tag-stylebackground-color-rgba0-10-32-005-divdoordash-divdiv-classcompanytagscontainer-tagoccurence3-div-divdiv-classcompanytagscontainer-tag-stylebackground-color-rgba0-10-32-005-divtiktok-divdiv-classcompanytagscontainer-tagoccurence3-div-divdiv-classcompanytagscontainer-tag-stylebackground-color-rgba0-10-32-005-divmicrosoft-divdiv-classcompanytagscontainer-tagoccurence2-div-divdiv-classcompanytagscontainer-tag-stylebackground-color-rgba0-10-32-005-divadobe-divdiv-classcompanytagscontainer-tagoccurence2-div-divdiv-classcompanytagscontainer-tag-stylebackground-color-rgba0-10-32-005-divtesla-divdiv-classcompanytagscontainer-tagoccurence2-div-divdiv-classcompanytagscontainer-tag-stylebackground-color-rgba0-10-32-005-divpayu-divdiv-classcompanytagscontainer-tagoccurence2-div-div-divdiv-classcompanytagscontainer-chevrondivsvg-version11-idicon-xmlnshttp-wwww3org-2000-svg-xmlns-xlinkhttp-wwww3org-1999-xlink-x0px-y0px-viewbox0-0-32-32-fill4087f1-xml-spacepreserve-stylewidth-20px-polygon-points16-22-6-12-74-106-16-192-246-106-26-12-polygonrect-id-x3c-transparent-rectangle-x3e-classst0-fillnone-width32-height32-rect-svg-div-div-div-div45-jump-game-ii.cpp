class Solution {
public:
  int help(vector<int>&nums,int ind,int n,vector<int>&dp){
        if(ind>=n-1){
            return 0;
        }
        if(nums[ind]==0){
            return INT_MAX ;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int ans=INT_MAX;
        for(int i=nums[ind];i>=1;i--){
           int temp=help(nums,ind+i,n,dp);
          if(temp!=INT_MAX) ans=min(ans,1+temp);
        }
        return dp[ind]=ans;
    }
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return help(nums,0,n,dp);
    }
};