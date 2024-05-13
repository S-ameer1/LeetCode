class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            bool flip=0;
            for(int j=0;j<n;j++){
                if(flip==1){
                    grid[i][j]=!grid[i][j];
                }
                if(grid[i][0]==0){
                    flip=1;
                    grid[i][j]=1;
                }    
            }
        }
        for(int j=0;j<n;j++){
            int cnt1=0;
            bool flip=0;
            for(int i=0;i<m;i++){
                cnt1+=grid[i][j];
            }
            if(2*cnt1<m){
                flip=1;
            }
            if(flip){
                for(int k=0;k<m;k++){
                    grid[k][j]=!grid[k][j];
                }
            }
            
        }
        int ans=0;
        for(int i=0;i<m;i++){
            int num=0;
            for(int j=0;j<n;j++){
                num+= (1<<(n-j-1))*grid[i][j];
            }
            ans+=num;
        }
        return ans;
    }
};