class Solution {
public:

    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<double>time(n);
        for(int i=0;i<n;i++){
            double temp=(double)dist[i]/speed[i];
            time[i]=temp;
        }
        sort(time.begin(),time.end());
        int t=0;
        int count=0;
        for(auto x : time)
        {
            if(x > t)
            {
                count++;
                t++;
            }
            else break;
        }
        return count;
    }
        
        
};