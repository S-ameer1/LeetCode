class Solution {
public:
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>>ans;
       if(numrows==0){
           return ans;
       }
       if(numrows==1){
           ans.push_back({1});
           return ans;
       }
       for(int i=1;i<=numrows;i++){
           vector<int>temp(i,1);
           ans.push_back(temp);
           for(int j=1;j<i-1;j++){
              ans[i-1][j]=ans[i-2][j]+ans[i-2][j-1];
           }
           
       }
       return ans;


     
        
    }
};