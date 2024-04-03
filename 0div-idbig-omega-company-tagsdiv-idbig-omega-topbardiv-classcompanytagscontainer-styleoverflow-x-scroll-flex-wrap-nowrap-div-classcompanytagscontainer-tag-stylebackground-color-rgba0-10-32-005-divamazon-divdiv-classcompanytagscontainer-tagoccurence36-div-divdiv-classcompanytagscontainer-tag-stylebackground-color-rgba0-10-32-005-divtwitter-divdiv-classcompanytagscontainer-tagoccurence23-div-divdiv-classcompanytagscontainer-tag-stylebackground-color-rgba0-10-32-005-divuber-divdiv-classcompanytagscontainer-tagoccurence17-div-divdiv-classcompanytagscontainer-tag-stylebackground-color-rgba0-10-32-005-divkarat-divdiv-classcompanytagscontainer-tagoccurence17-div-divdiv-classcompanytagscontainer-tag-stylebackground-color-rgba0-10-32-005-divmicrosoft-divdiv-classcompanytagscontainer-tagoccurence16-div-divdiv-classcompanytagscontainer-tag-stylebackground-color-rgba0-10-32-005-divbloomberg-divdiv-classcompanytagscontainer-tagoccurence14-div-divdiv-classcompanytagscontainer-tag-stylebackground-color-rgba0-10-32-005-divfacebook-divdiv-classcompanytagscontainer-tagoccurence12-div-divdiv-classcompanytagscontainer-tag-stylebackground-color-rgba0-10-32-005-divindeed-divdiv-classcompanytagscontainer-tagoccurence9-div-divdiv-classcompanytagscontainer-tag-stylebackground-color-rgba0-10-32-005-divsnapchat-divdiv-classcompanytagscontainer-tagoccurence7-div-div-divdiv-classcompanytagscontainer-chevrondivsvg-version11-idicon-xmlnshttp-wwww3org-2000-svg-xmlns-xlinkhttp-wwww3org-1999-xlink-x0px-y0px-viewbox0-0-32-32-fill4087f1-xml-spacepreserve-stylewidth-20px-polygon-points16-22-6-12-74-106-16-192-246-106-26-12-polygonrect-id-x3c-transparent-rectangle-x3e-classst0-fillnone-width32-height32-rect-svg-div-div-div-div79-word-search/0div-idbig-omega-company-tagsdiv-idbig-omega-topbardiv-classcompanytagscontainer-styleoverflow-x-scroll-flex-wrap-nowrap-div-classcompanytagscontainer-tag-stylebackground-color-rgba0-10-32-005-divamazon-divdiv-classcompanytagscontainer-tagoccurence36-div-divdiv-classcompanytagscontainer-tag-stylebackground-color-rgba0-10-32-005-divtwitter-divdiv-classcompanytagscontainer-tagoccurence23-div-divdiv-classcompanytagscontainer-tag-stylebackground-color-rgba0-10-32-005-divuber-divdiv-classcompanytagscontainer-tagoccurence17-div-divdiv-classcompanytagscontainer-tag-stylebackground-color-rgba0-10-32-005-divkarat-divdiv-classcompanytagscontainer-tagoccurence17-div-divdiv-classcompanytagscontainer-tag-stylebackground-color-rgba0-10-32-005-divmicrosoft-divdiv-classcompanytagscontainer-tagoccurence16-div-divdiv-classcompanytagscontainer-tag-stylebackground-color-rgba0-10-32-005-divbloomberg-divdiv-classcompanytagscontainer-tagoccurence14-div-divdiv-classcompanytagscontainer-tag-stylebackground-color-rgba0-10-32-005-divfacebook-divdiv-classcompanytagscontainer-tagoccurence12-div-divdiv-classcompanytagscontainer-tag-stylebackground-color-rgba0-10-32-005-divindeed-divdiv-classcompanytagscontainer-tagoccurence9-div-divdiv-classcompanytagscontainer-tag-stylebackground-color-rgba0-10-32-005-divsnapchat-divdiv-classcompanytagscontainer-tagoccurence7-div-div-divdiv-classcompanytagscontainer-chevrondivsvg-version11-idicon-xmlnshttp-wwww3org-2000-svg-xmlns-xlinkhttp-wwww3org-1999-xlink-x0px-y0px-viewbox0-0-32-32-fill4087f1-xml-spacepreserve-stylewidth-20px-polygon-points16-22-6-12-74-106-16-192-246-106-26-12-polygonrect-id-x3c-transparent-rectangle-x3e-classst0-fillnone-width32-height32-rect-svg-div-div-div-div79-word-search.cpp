class Solution {
public:
    bool help(int ind,int r,int c,int m, int n,vector<vector<bool>>&visited,vector<vector<char>>& board,string word){
        if(ind>=word.size()){
            return 1;
        }
        if(r>=m || r<0 || c>=n || c<0){
            return 0;
        }
        if(board[r][c]!=word[ind] || visited[r][c]==1){
            return 0;
        }
        visited[r][c]=1;
        bool a=help(ind+1,r,c+1,m,n,visited,board,word) || help(ind+1,r-1,c,m,n,visited,board,word) || help(ind+1,r,c-1,m,n,visited,board,word) || help(ind+1,r+1,c,m,n,visited,board,word);
        visited[r][c]=0;
        return a;


        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,0));
         for (int i=0;i<m;i++) {
            for (int j=0;j<n;j++) {
                if (help(0,i,j,m,n,visited,board,word)) {
                    return true;
                }
            }
        }
        return false;
    }
};