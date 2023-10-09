class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     
        vector<int>ans(2,-1);
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target && j==0){
                ans[0]=i;
                ans[1]=i;
                j++;
            }
            else if(nums[i]==target){
                ans[1]=i;
            }
        }
        return ans;
    }
};