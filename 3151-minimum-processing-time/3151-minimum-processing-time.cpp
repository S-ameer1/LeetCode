class Solution {
public:
    int minProcessingTime(vector<int>& pt, vector<int>& task) {
        sort(pt.begin(),pt.end(),greater<int>());
        sort(task.begin(),task.end());
        int ans=0;
        int count=0;
        int j=0;
        for(int i=0;i<task.size();i++){
            if(count==4){
                count=0;
                j++;
            }
            ans=max(ans,task[i]+pt[j]);
            count++;
        }
return ans;
        
    }
};