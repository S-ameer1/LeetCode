#include <vector>
#include <unordered_map>

class Solution {
public:
    int numberOfArithmeticSlices(std::vector<int>& nums) {
        int n = nums.size();
        long long total_count = 0;  // Use long long to avoid integer overflow
        std::vector<std::unordered_map<long long, int>> dp(n); // dp[i] is a map to store the count of arithmetic subsequences ending at index i

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                long long diff = static_cast<long long>(nums[i]) - nums[j];

                // Check if there is a subsequence ending at index j with a common difference diff
                int count_at_j = (dp[j].find(diff) != dp[j].end()) ? dp[j][diff] : 0;

                // Increment the total count by the count of subsequences ending at index j with common difference diff
                total_count += count_at_j;

                // Update the count of subsequences ending at index i with common difference diff
                dp[i][diff] = dp[i][diff] + count_at_j + 1;
            }
        }

        return static_cast<int>(total_count);
    }
};
