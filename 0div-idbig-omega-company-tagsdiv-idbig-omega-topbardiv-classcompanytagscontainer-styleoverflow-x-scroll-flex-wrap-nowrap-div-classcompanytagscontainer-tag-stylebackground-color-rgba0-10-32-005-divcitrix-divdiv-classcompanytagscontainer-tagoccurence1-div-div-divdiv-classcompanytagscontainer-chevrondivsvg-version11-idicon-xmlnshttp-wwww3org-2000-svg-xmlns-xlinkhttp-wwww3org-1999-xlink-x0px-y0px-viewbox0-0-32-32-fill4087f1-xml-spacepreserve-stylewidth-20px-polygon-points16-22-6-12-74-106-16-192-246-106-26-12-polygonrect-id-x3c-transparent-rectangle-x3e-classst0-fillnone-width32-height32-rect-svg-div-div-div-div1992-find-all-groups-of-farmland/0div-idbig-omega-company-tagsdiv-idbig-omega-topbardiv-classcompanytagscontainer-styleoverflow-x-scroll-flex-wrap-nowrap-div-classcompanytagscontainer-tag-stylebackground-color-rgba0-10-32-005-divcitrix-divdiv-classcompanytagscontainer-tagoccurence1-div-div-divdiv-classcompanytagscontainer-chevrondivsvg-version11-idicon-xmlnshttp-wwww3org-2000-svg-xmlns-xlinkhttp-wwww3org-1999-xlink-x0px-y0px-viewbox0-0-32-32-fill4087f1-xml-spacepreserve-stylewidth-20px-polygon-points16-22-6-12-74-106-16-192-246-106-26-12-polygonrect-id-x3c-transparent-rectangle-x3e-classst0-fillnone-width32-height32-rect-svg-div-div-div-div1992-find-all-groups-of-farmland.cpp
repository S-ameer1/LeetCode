class Solution {
public:
    void dfs(int startrow,int startcol,int row,int col, vector<vector<int>>&ans, vector<vector<int>>&vis,vector<vector<int>>& land,int endrow, int endcol){
        int n=land.size(),m=land[0].size();
        vis[row][col] = 1;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,1,0,-1};
        //int endrow=startrow, endcol=startcol;
        bool haveone = false;
        for(int i=0; i<4; i++){
            int nrow = row+delrow[i], ncol=col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && land[nrow][ncol] == 1 
            && !vis[nrow][ncol]){
                haveone = true;
                endrow = max(endrow,nrow); endcol=max(endcol,ncol);
                dfs(startrow,startcol,nrow,ncol,ans,vis,land,endrow,endcol);
            }
        }
        if(!haveone){
            ans.push_back({startrow,startcol,endrow,endcol});
            return;
        }
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        int n = land.size(), m=land[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(land[i][j] == 1 && !vis[i][j]){
                    dfs(i,j,i,j,ans,vis,land,i,j);
                }
            }
        }
        return ans;
    }
};