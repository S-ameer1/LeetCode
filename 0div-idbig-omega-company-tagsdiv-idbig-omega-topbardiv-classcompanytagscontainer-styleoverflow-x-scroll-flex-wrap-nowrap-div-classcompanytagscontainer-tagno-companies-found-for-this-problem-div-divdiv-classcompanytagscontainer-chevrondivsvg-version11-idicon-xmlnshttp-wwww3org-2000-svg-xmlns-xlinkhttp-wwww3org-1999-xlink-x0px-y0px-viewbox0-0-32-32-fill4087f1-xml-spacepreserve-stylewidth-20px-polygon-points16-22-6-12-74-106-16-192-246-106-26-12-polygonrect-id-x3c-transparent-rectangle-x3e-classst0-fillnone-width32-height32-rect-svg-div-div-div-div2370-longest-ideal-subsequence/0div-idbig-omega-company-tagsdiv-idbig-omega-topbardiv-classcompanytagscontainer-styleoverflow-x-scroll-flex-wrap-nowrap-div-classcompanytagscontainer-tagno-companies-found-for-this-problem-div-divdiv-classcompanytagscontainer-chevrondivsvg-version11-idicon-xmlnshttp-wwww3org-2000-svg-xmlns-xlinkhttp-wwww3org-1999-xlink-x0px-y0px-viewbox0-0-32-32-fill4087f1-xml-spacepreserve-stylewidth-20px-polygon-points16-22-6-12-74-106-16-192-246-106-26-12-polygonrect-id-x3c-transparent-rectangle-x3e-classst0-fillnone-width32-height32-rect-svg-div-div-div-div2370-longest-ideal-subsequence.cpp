class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> mp(26, 0); 
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int currentCharIndex = s[i] - 'a';
            int maxLen = 0;

            for (int j = max(0, currentCharIndex - k); j <= min(25, currentCharIndex + k); j++) {
                maxLen = max(maxLen, mp[j]);
            }

            mp[currentCharIndex] = maxLen + 1;
        }
        return *max_element(mp.begin(), mp.end());
    }
};