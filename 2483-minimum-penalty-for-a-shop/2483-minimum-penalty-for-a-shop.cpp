class Solution {
public:
    int bestClosingTime(string customers) {
        int mini=INT_MAX;
        int n=customers.size();
        int prefixN=0;
        int sufixY=0;
        for(int i=0;i<n;i++){
            if(customers[i]=='Y'){
                sufixY++;
        }
        }
       int hour;

        for(int i=0;i<=n;i++){
            int penalty=0;
                penalty+=sufixY;
                penalty+=prefixN;

            if(customers[i]=='Y'){
                sufixY--;
            }
            else{
                prefixN++;
            }
           if(mini>penalty){
               mini=penalty;
               hour=i;
           }

        }
        
        return hour;
        
    }
};