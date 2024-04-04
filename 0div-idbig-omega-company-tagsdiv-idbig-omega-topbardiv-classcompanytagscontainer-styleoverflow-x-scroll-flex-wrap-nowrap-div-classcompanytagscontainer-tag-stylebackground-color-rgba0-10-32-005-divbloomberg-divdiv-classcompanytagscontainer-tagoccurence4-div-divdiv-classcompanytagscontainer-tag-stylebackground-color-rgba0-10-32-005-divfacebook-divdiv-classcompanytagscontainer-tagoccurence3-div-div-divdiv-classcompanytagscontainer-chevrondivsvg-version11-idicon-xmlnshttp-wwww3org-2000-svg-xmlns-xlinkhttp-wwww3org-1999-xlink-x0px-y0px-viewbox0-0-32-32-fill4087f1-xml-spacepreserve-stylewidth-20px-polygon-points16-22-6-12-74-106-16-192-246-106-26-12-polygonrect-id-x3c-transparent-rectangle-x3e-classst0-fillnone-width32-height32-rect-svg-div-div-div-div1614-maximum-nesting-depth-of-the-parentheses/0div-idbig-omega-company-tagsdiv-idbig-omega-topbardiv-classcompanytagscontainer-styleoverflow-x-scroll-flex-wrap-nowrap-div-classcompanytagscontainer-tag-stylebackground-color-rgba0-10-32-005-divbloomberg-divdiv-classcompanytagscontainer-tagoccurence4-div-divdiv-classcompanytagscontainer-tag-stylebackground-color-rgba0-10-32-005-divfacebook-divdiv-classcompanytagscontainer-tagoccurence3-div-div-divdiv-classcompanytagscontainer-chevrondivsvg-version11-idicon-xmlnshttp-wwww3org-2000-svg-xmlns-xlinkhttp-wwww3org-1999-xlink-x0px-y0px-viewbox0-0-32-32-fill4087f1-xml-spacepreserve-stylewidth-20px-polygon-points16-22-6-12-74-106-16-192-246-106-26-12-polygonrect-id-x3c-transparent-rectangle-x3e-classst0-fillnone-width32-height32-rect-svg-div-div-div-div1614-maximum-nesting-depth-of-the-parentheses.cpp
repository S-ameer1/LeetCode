class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int ans=INT_MIN;
        stack<char>st;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
               st.push(s[i]);
            }
            else{
                if(s[i]==')'){
                    st.pop();
                }
            }
            int sz=st.size();
            ans=max(ans,sz);
        }
        return ans;
    }
};