class Solution {
public:
    string customSortString(string order, string s) {
        int n=order.size();
        int m=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<m;i++){
            mp[s[i]]++;
        }
        string ans;
        for(int i=0;i<n;i++){
            if(mp[order[i]]>0){
               while(mp[order[i]]>0){
                    ans.push_back(order[i]);
                    mp[order[i]]--;
               }
            }
        }
        for(auto i:mp){
            if(i.second>0){
                while(i.second>0){
                    ans.push_back(i.first);
                    i.second--;
                }
            }
        }
        return ans;
    }
};