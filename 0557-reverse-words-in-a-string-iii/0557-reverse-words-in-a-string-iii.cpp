class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        string temp;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                reverse(temp.begin(),temp.end());
                ans+=temp;
                ans+=" ";
                temp="";
                }
            }
        reverse(temp.begin(),temp.end());
                ans+=temp;
                return ans;
        
          
    }
};