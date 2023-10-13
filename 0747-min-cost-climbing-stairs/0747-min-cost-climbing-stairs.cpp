class Solution {
public:
    int costS(int i,vector<int> cost,vector<int>& dp){
        if(dp[i]!=-1) return dp[i];
        int left,right;
        if(i==-1) return 0;
        
        if(i>0){       
                left=costS(i-1,cost,dp) + cost[i-1];
        }
        else
            left=0;
        
        if(i>1){ 
                right=costS(i-2,cost,dp) + cost[i-2];
        }
        else
            right=0;
        
        return dp[i]=min(right,left);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        return costS(cost.size(),cost,dp);        
    }
};