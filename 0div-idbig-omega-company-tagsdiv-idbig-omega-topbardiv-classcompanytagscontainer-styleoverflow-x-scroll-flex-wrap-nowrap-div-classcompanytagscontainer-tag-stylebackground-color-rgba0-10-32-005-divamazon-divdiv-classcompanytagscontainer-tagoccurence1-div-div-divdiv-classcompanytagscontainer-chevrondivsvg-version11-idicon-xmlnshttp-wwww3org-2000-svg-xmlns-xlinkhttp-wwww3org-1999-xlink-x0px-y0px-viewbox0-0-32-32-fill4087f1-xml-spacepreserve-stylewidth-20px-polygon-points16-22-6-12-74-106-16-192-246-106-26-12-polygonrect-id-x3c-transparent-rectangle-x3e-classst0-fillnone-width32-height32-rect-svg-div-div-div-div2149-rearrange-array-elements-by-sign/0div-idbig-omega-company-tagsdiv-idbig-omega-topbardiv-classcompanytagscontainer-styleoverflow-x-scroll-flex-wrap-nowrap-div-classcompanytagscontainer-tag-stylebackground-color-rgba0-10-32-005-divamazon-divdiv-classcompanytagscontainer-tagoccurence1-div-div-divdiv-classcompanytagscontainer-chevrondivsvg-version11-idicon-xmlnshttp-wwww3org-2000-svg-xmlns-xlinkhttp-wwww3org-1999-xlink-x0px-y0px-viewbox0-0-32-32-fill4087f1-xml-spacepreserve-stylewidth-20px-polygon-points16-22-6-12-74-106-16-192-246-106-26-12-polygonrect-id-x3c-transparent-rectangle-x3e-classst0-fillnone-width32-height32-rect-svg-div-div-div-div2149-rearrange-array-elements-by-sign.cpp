class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>posi;
        vector<int>neg;
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                posi.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        int po=0;
        int ne=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=posi[po];
                po++;
            }
            else{
                nums[i]=neg[ne];
                ne++;
            }
        }
        return nums;
    }
};