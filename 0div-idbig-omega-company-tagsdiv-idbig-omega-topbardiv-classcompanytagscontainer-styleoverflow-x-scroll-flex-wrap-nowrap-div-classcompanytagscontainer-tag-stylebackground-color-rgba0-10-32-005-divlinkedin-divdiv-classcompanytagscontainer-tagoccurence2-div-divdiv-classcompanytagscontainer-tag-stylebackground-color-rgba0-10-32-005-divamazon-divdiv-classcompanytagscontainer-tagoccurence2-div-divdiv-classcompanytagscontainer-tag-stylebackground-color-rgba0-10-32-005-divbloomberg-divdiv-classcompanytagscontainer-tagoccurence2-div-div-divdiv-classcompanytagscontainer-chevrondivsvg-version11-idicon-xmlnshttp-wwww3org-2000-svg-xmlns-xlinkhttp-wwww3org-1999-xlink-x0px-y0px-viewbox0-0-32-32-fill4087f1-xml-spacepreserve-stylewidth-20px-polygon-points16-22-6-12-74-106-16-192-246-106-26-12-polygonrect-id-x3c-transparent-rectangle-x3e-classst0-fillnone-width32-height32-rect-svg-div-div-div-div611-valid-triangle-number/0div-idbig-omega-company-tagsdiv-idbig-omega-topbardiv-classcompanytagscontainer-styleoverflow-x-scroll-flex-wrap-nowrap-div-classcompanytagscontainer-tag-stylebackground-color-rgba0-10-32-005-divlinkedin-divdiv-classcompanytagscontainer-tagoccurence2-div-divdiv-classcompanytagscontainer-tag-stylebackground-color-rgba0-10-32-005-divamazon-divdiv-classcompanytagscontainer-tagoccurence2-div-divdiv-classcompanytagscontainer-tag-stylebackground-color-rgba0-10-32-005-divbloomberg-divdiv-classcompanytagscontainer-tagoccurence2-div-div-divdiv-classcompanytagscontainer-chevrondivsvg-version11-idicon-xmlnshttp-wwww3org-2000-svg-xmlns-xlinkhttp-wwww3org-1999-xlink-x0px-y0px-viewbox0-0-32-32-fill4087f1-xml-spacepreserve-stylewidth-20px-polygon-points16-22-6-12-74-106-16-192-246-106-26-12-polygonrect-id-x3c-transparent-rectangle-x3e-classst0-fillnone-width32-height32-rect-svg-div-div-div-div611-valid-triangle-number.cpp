class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int index=lower_bound(nums.begin(),nums.end(),nums[i]+nums[j])-nums.begin();
                count+=max(0,index-j-1);
            }
        }
        return count;
    }
};