class Solution {
public:

    bool ispossible(int row,int col,vector<string>&board,int n){

        for(int i=row;i>=0;i--){
            if(board[i][col]=='Q'){
                return 0;
            }
        }
        int i=row;
        int j=col;
        while(i>=0 && j>=0){
            if(board[i][j]=='Q'){
                return 0;
            }
            i--;
            j--;
        }
        int duprow=row;
        int dupcol=col;
        while(duprow>=0 && dupcol<n){
            if(board[duprow][dupcol]=='Q'){
                return 0;
            }
            duprow--;
            dupcol++;
        }
        return 1;
    }
    void solve(int row,vector<string>&board,vector<vector<string>>&ans,int n){
        if(row==n){
            ans.push_back(board);
            return ;
        }

        for(int col=0;col<n;col++){
            if(ispossible(row,col,board,n)){
                board[row][col]='Q';
                solve(row+1,board,ans,n);
                board[row][col]='.';
            }

        }
    }
    vector<vector<string>> solveNQueens(int n,vector<vector<string>>&ans) {
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
    int totalNQueens(int n) {
        vector<vector<string>>ans;
        solveNQueens(n,ans);
        return ans.size();
    }
};
