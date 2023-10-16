class Solution {
public:
vector<vector<int>> help(int numrows) {
       if(numrows==0){
           return {};
       }
       if(numrows==1){
           return {{1}};
       }

       vector<vector<int>>smallans=help(numrows-1);
       vector<int>lastrow(numrows,1);


       for(int i=1;i<numrows-1;i++){
           lastrow[i]=smallans[numrows-2][i]+smallans[numrows-2][i-1];
       }
       smallans.push_back(lastrow);
       return smallans;
        
    }
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>smallans=help(rowIndex+1);
        return smallans[rowIndex];
        
    }
};