class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int current=nums[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(count==0){
                current=nums[i];
                count++;
                continue;
            }
            if(nums[i]==current)count++;
            else{
                count--;
            }
        }
        return current;
    }
};