class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        const int mod = 1e9 + 7;
        int n = arr.size();
        stack<int> s;
        vector<int> left(n), right(n);
        for (int i = 0; i < n; ++i) {
            while (!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }
            left[i] = s.empty() ? -1 : s.top();
            s.push(i);
        }
        while (!s.empty()) {
            s.pop();
        }
        for (int i = n - 1; i >= 0; --i) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            right[i] = s.empty() ? n : s.top();
            s.push(i);
        }
        long sum = 0;
        for (int i = 0; i < n; ++i) {
            sum = (sum + (long)arr[i] * (i - left[i]) * (right[i] - i)) % mod;
        }
        return sum;
    }
};