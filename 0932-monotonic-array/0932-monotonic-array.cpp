class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incr=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]<=nums[i]){
                continue;
            }
            else{
                incr=0;
                break;
            }
            }
            bool decr=1;
            for(int i=1;i<nums.size();i++){
            if(nums[i-1]>=nums[i]){
                continue;
            }
            else{
                decr=0;
                break;
            }
            }
            return incr || decr;
    }
};