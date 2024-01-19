class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>>ans(matrix.size(),vector<int>(matrix[0].size(),INT_MAX));
        for(int i=0;i<matrix[0].size();i++)
        {
            ans[0][i] = matrix[0][i];
        }
        for(int i=1;i<matrix.size();i++)
        {
            
            for(int j=0;j<matrix[0].size();j++)
            {
                if(j==0)
                {
                    ans[i][j]=matrix[i][j]+min(ans[i-1][j],ans[i-1][j+1]);
                }
                else if(j==matrix[0].size()-1)
                {
                    ans[i][j]=matrix[i][j]+min(ans[i-1][j],ans[i-1][j-1]);
                }
                else {
                    ans[i][j] = matrix[i][j]+min({ans[i-1][j],ans[i-1][j-1],ans[i-1][j+1]});
                }
            }
        }
        int a = INT_MAX;
        for(int i =0 ;i<matrix[0].size();i++)
        {
            a = min(a,ans[ans.size()-1][i]);
        }
        return a;
    }
};