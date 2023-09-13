 class Solution {
public:
    int candy(vector<int>& arr) {
        int n = arr.size();
        vector<int> candies(n, 1);  
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                candies[i]=candies[i]+candies[i-1];
            }

        }
        vector<int>candies2(n,1);
        for(int i=n-2;i>=0;i--){
            if(arr[i]>arr[i+1]){
                candies2[i]=candies2[i]+candies2[i+1];
                candies2[i]=max(candies2[i],candies[i]);
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
             candies[i]=max(candies[i],candies2[i]);
                sum+=candies[i];
        }

            
        
        return sum;
    }
};
