class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int maxi=INT_MIN;
         int s=1;
         int p=1;
         for(int i=0;i<nums.size();i++){
             if(nums[i]==0){
                 p=1;
                 maxi=max(maxi,0);
                 continue;
             }
             p*=nums[i];
             maxi=max(maxi,p);
         }
         for(int j=nums.size()-1;j>=0;j--){
             if(nums[j]==0){
                 s=1;
                 maxi=max(maxi,0);
                 continue;
             }
             s*=nums[j];
             maxi=max(maxi,s);
         }
         return maxi;
    }
};