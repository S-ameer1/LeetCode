class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<pair<double, pair<int, int>>> ans;
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                double fraction = (double)arr[i] / arr[j];
                ans.push_back({fraction, {arr[i], arr[j]}});
            }
        }
        sort(ans.begin(), ans.end());
        return {ans[k - 1].second.first, ans[k - 1].second.second};
    }

    
};