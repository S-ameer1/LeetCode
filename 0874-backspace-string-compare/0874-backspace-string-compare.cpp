class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1;
       for(int i=0;i<s.size();i++){
           if(s[i]!='#'){
               s1.push_back(s[i]);
           }
           else{
               if(s1.size()!=0){
               s1.pop_back();
               }
           }
       }
        string s2;
       for(int i=0;i<t.size();i++){
           if(t[i]!='#'){
               s2.push_back(t[i]);
           }
           else{
               if(s2.size()!=0){
               s2.pop_back();
               }
           }
       }
       return s1==s2;
    }
};