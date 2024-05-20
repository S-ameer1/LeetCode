class Solution {
public:
    void helper(vector<int> &nums,vector<int> &ans,int &XOR,int &sum,int index)
    {
        if(index == nums.size())
        {
            for(int i=0;i<ans.size();i++)
            {
                XOR = XOR^ans[i];   
            }
            sum+=XOR;
            XOR = 0;
            return;
        }
        ans.push_back(nums[index]);
        helper(nums,ans,XOR,sum,index+1);
        ans.pop_back();
        helper(nums,ans,XOR,sum,index+1);
    }
    int subsetXORSum(vector<int>& nums) {
        int sum = 0;
        int XOR = 0;
        vector<int> ans;
        helper(nums,ans,XOR,sum,0);
        return(sum);
    }
};