class Solution {
public:
     vector<vector<int>>ans;
     void help(int i,int n,int &target,vector<int>&v,vector<int>&c){
        if(i==n){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
       if(c[i]<=target){
            target=target-c[i];
            v.push_back(c[i]);
            help(i,n,target,v,c);
            v.pop_back();
            target=target+c[i];
            
       }
        help(i+1,n,target,v,c);
        return ;

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>v;
        int n=candidates.size();
        help(0,n,target,v,candidates);
        return ans;
    }
};