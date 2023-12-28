class Solution {
public:
    int minCost(string color, vector<int>& time) {
        int n=time.size();
        int prev=0;
        int current=1;
        int count=0;
        while(current<n && prev<n){
            if(color[prev]==color[current]){
                if(time[current]<time[prev]){
                    count+=time[current];
                    current++;
                }
                else{
                    count+=time[prev];
                    prev=current;
                    current++;
                }
            }
            else{
                prev=current;
                current++;

            }
        }
        return count;
    }
};