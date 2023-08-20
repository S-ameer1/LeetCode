class Solution {
public:
    int reverse(int n){
        int reverseNumber=0;
        while(n!=0){
            int a=n%10;
            reverseNumber=reverseNumber*10+a;
            n=n/10;

        }
        return reverseNumber;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_map<int,int>map;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int ans=reverse(nums[i]);
            nums.push_back(ans);
        }
         for(int i=0;i<nums.size();i++){
           map[nums[i]]++;
        }
       
        return map.size();
    }
        
};