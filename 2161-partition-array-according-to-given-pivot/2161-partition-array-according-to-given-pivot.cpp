class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>small;
        vector<int>big;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                small.push_back(nums[i]);
            }
            else if(nums[i]>pivot){
                big.push_back(nums[i]);
            }
            else{
                count++;
            }
        }
        int i=0;
        for(;i<small.size();i++){
            nums[i]=small[i];
        }
        for(int j=0;j<count;j++){
            nums[i]=pivot;
            i++;
        }
        for(int j=0;j<big.size();j++){
            nums[i]=big[j];
            i++;
        }

        return nums;
    }
};