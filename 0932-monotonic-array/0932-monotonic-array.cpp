class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       bool incr=1;
       bool decr=1;
       for(int i=1;i<nums.size();i++){
           if(nums[i]>nums[i-1]){
               decr=0;
           }
           else if(nums[i]<nums[i-1]){
               incr=0;
           }

           if(incr==0 && decr==0){
               return 0;
           }
       }
       return 1;
    }
};