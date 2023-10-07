class Solution {
    int mod=1000000007;
    int dp[51][101][101];
    
    int solve(int i,int n,int m,int k,int pMax,int cost)
    {
        if(i==n)
        {
            if(cost==k)
            {
             return 1;
            }
            return 0;
        }
        if(dp[i][pMax][cost]!=-1)
        {
            return dp[i][pMax][cost];
            
        }
        int ans=0;
        
        for(int j=1;j<=m;j++)
        {
            int a=0;
            if(pMax<j)
            {
                a=solve(i+1,n,m,k,j,cost+1);
            }
            else
            {
                  a=solve(i+1,n,m,k,pMax,cost);
            }
            ans=(ans%mod+a%mod)%mod;
        }
        return dp[i][pMax][cost]=ans;
    }
public:
    int numOfArrays(int n, int m, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(0,n,m,k,0,0);
       
    }
};