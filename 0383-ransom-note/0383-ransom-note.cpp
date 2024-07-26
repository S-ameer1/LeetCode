class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=magazine.size();
        int m=ransomNote.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<m;i++){
            mp[ransomNote[i]]--;
            if(mp[ransomNote[i]]<0){
                return 0;
            }
        }
        return 1;
    }
};