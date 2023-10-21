class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        const int size = nums.size();
        priority_queue<pair<int, int>> pq;
        pq.push(make_pair(nums[size-1], size-1));
        
        int maxSum = nums[size-1];
        for (int i = size-2; i >= 0; i--) {
            while (pq.top().second - i > k)
                pq.pop();
            int curOpt = max(nums[i], nums[i] + pq.top().first);
            pq.push(make_pair(curOpt, i));
            maxSum = max(maxSum, curOpt);
        }
        return maxSum;
    }
};