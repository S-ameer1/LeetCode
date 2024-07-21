class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        int ans=n;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        for(auto i:mp){
            if(i.second>=3){
                if(i.second%2==0 ){
                ans-=(i.second-2);
                }
            else{
                ans-=i.second-1;
                }
           }
        }
        return ans;
    }
};