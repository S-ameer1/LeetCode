class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        string ans="";
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                st.push(s[i]);
            }
            else{
                while(st.size()!=0){
                    ans+=st.top();
                    st.pop();
                }
                ans+=" ";
            }
        }
          while(st.size()!=0){
                    ans+=st.top();
                    st.pop();
                }
                return ans;
        
    }
};