class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        if(size==0){ 
            return 0;
            }
        sort(nums.begin(), nums.end());
        int maxi = 0;
        int count = 1;
        for(int i=1;i<size;i++){
            if(nums[i] == nums[i-1]) {
                continue; 
                }
            else if(nums[i] == nums[i-1] + 1) {
                count++; 
            }
            else {
                maxi = max(maxi,count);
                 count = 1; 
                }
        }
        return max(maxi,count);
    }
};