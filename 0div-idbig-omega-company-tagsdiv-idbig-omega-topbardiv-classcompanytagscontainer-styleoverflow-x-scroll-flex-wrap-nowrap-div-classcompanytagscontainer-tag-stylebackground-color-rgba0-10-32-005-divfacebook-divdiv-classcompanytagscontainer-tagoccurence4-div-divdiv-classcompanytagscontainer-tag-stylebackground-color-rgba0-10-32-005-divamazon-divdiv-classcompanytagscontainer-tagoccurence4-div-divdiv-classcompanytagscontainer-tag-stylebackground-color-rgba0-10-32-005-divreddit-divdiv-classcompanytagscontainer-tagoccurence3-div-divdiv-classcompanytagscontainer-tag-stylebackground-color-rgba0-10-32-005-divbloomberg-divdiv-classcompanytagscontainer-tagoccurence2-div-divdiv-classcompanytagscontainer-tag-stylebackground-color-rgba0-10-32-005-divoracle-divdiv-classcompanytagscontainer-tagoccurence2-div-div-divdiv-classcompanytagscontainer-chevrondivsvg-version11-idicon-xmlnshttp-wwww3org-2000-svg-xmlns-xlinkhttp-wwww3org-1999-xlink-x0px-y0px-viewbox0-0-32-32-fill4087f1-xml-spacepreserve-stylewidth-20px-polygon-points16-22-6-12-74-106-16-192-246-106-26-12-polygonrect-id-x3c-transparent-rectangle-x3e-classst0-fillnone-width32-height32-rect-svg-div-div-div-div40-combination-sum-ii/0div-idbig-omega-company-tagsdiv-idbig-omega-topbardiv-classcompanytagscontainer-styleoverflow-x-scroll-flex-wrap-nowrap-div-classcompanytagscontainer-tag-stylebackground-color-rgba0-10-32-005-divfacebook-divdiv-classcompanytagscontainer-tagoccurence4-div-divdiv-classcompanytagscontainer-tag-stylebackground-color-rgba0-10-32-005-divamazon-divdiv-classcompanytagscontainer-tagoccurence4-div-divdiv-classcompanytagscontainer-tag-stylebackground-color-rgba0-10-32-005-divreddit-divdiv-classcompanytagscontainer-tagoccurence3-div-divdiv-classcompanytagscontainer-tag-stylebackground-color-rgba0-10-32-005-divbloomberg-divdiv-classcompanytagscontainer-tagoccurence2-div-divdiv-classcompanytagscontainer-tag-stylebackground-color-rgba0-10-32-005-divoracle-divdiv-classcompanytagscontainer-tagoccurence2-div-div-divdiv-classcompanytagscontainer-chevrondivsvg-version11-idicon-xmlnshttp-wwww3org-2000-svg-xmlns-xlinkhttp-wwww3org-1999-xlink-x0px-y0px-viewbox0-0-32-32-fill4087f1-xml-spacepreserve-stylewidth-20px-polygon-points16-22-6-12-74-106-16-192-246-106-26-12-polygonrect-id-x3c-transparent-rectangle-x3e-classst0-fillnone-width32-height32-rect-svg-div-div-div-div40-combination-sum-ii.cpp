class Solution {
public:
     vector<vector<int>>ans;
     void help(int i,int n,int target,vector<int>&v,vector<int>&c){
            if(target==0){
                ans.push_back(v);
            }
            for(int j=i;j<n;j++){
                if(j>i && c[j]==c[j-1]){
                    continue;
                }
                if(c[j]>target){
                  break;
                }
                 v.push_back(c[j]);
                 help(j+1,n,target-c[j],v,c);
                 v.pop_back();
            }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());  
        vector<int>v;
        int n=candidates.size();
        help(0,n,target,v,candidates);
        return ans;
    }
};