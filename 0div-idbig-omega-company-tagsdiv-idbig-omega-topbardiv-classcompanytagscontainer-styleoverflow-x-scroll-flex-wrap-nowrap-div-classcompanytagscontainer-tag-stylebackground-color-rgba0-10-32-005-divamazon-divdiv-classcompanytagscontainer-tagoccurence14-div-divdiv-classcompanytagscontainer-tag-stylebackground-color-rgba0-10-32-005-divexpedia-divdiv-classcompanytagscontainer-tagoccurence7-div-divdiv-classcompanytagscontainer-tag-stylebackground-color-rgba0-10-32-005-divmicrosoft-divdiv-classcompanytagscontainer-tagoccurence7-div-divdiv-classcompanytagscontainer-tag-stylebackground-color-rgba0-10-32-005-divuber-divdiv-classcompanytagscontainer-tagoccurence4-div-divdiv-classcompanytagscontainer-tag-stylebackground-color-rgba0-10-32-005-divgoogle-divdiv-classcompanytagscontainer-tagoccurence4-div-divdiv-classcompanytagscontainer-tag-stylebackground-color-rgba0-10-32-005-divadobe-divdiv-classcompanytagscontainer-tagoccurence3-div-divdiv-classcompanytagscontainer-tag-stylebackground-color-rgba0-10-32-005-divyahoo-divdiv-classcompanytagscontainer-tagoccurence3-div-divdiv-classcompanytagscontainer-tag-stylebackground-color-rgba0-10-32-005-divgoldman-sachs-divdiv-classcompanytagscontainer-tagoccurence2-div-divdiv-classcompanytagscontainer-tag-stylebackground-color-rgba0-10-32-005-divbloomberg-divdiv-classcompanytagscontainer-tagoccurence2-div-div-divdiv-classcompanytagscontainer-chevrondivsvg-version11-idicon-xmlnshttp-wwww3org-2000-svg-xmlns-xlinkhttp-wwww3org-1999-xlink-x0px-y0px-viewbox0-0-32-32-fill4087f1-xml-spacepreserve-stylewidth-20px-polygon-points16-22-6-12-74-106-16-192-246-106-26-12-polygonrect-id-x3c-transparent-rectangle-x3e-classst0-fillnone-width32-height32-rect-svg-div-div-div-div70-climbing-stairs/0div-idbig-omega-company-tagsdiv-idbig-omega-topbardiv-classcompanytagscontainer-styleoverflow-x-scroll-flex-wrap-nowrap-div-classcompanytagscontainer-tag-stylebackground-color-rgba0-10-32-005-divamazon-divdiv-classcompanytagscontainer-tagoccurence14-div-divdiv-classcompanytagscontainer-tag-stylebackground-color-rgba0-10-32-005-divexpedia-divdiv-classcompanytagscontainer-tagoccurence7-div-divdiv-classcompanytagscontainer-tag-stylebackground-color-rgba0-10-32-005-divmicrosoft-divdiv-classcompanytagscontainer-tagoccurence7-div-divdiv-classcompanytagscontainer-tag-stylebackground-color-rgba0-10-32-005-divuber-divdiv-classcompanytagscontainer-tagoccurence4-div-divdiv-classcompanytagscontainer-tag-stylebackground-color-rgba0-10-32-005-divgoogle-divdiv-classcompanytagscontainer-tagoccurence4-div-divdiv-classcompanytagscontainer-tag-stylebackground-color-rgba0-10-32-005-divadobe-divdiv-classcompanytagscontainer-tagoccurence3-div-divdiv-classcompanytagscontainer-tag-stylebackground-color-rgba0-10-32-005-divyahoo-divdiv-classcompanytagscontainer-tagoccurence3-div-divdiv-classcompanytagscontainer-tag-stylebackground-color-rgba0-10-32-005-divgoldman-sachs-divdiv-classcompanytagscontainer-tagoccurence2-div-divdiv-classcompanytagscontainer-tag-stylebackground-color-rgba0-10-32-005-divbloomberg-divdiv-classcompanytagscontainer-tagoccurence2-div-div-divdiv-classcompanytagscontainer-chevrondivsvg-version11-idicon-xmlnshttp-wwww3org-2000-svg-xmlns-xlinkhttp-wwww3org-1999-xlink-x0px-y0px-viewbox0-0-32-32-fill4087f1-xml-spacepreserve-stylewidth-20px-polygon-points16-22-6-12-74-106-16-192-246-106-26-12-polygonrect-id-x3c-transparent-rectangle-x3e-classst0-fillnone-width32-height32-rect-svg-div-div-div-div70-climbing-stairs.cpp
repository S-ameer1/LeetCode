class Solution {
public:
    int climbStairs(int n) {
        int prev2=1;
        int prev=1;
        int next=0;
        for(int i=2;i<=n;i++){
             next=prev+prev2;
            prev2=prev;
            prev=next;
            
        }
        return prev;
    }
};