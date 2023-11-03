class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int N=target.size();
        vector<string>ans;
        stack<int>s1;
        for(int i=N-1;i>=0;i--){
            s1.push(target[i]);
        }
        stack<int>s2;
        int i=1;
        while(s1.size()!=0 && i<=n ){   
            s2.push(i);
            ans.push_back("Push");
            if(s2.top()!=s1.top()){
                s2.pop();
                ans.push_back("Pop");

            }
            else{
                s1.pop();
            }
            i++;
        }
        return ans;
    }
};