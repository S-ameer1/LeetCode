class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n=magazine.size();
        int m=ransomNote.size();
        unordered_map<int,int>mp;
        unordered_map<int,int>mp2;
        for(int i=0;i<n;i++){
            mp[magazine[i]]++;
        }
        for(int i=0;i<m;i++){
            mp2[ransomNote[i]]++;
        }
        for(int i=0;i<m;i++){
            if(mp2[ransomNote[i]]>mp[ransomNote[i]]){
                return 0;
            }
        }
        return 1;
    }
};