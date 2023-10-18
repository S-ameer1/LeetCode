class Solution {
public:
    vector<vector<int>>ans;
    int help(vector<int>&nums,int si,int n){
        if(si>=n){
            vector<int>temp;
            ans.push_back(temp);
            return 1;
        }
        int smallans=help(nums,si+1,n);
        for(int i=0;i<smallans;i++){
            vector<int>temp;
            temp.push_back(nums[si]);
            for(int j=0;j<ans[i].size();j++){
                temp.push_back(ans[i][j]);
            }
            ans.push_back(temp);
        }
        return 2*smallans;

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        help(nums,0,nums.size());
        return ans;
        
    }
};