class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
         int n = nums.size();
        int i=0,j=0;
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(x > sum) return -1;
        if(x == sum) return n;
        sum = sum - x;
        int temp =0;
        int ans = 0;
        while(j<n)
        {
            temp += nums[j];
            if(temp == sum) 
            {
                ans = max(ans,j-i+1);
            }
            if(temp > sum){
                while(temp > sum)
                {
                    temp -= nums[i];
                    i++;
                }
                if(temp == sum)
                {
                    ans = max(ans,j-i+1);
                }
            }
            j++;
        }
        if(ans == 0) return -1;
        return n-ans;
    }
};