class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int r=rowSum.size();
        int c=colSum.size();
        vector<vector<int>>ans(r,vector<int>(c,0));
        int mini=INT_MAX;
        for(int j=0;j<c;j++){
            for(int i=0;i<r;i++){
                mini=min(rowSum[i],colSum[j]);
                ans[i][j]=mini;
                rowSum[i]-=mini;
                colSum[j]-=mini;
            }
        }
        return ans;
    }
};