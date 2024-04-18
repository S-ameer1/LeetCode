class Solution {
public:
    int Surrounding(vector<vector<int>>& grid,int i, int j){
        long long cnt=4;
        if(i!=grid.size()-1 && grid[i+1][j]==1)cnt--;
        if(j!=grid[0].size()-1 && grid[i][j+1]==1)cnt--;
        if(i!=0 && grid[i-1][j]==1)cnt--;
        if(j!=0 && grid[i][j-1]==1)cnt--;
        return cnt;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        
        long long per=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    per+=Surrounding(grid,i,j);
                }
            }
        }
        return per;
    }
};