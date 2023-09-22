class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s==""){
            return 1;
        }
        int j=0;
        int i=0;
        while(j<s.size() && i<t.size()){
            if(s[j]==t[i]){
                if(j==s.size()-1){
                    return 1;
                }
                i++;
                j++;
            }
            else{
                i++;
                
            }
        }
        return 0;
        
    }
};