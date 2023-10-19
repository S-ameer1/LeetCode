class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1;
        stack<char>st2;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#'){
                st1.push(s[i]);
            }
            else{
               if(st1.size()!=0){
                st1.pop();
                }
            }
        }
        string s1="";
        while(st1.size()!=0){
            s1+=st1.top();
            st1.pop();

        }

        for(int i=0;i<t.size();i++){
            if(t[i]!='#'){
                st2.push(t[i]);
            }
            else{
                if(st2.size()!=0){
                st2.pop();
                }
            }
        }
         string s2="";
        while(st2.size()!=0){
            s2+=st2.top();
            st2.pop();

        }
        if(s1==s2){
            return 1;
        }
        return 0;

    }
};