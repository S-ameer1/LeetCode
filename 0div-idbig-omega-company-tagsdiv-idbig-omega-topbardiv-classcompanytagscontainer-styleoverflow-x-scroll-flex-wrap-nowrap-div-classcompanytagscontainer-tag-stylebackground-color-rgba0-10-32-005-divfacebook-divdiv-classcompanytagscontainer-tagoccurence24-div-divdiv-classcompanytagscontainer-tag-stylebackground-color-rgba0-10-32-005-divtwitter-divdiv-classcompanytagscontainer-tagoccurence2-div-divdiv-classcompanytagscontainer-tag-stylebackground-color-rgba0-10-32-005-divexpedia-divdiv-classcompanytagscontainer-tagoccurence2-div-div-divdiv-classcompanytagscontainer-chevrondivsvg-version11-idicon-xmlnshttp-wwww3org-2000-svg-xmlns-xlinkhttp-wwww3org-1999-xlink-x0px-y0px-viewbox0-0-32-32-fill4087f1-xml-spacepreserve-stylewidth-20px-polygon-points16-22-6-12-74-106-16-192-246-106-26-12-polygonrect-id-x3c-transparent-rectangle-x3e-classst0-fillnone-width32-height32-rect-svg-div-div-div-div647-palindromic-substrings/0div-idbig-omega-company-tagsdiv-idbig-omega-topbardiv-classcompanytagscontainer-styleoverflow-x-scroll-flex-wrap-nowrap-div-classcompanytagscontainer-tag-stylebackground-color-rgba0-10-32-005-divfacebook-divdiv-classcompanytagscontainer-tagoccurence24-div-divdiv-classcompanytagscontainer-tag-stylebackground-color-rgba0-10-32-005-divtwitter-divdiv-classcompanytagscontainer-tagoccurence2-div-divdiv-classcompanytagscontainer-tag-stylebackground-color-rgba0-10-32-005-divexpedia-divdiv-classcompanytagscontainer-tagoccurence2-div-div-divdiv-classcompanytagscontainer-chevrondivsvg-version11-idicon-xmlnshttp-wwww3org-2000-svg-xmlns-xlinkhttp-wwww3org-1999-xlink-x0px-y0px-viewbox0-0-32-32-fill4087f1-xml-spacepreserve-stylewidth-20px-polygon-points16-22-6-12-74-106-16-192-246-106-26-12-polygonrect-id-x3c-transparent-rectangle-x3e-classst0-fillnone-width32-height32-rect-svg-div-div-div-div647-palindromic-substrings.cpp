class Solution {
public:
    bool ispalind(string temp,vector<vector<int>>&dp,int i,int j){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int s=0;
        int e=temp.size()-1;
        while(s<=e){
            if(temp[s]!=temp[e]){
                return dp[i][j]=0;
            }
            s++;
            e--;
        }
        return dp[i][j]=1;
    }
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        for(int i=0;i<n;i++){
            string temp="";
            for(int j=i;j<n;j++){
                temp+=s[j];
                count+=ispalind(temp,dp,i,j);
            }
        }
        return count;
    }
};