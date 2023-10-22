class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
          int n = nums.size();
        int min_val = nums[k];
        int max_score = nums[k];
        int left = k, right = k;
        while(left>0 || right<n-1){
            if(left==0){
                right++;
            }else if(right==n-1){
                left--;
            }else if(nums[left-1]<nums[right+1]){
                right++;
            }else{
                left--;
            }
            min_val = min(min_val, min(nums[left], nums[right]));
            max_score = max(max_score, min_val*(right-left+1));
        }
        return max_score;
    }
};