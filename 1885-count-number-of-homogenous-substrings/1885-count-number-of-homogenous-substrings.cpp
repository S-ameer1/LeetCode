#define mod 1000000007
class Solution {
public:
    int countHomogenous(string s) {
         vector<int> v(128,0);
        for(int i = 0; i < s.size(); ){
            int j = i+1;
            while(j < s.size() && s[i] == s[j]){
                j++;
            }
            //sum of n natural numbers-> n*(n+1)/2
            long n = j-i;
            v[s[i]] = (n*(n+1)/2)%mod + v[s[i]];
            i = j;
        }
        int ans = 0;
        for(auto i : v) ans += i;
        return ans;

        }

    
};