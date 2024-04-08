class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& san) {
        int n=stu.size();
        queue<int>pq;
        stack<int>st;
        for(int i=0;i<n;i++){
            pq.push(stu[i]);
            st.push(san[n-i-1]);
        }
        int count=0;
        while(st.size()>0 && count<=st.size()){
            if(st.top()==pq.front()){
                st.pop();
                pq.pop();
                count=0;
            }
            else{
                int t=pq.front();
                pq.pop();
                pq.push(t);
                count++;
            }
        }
        return st.size();
    }
};