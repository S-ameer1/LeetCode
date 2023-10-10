class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        priority_queue<pair<int, int>> maxHeap;
        
        for (int i = 0; i < n; i++) {
            while (!maxHeap.empty() && maxHeap.top().second < i - k + 1) {
                maxHeap.pop();
            }
            
            maxHeap.push({nums[i], i});  
            if (i >= k - 1) {
                ans.push_back(maxHeap.top().first);
            }
        }
        
        return ans;
    }
};
