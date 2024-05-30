class Solution {
public:
    int countTriplets(vector<int>& arr) {
        vector<int>prefix(begin(arr) , end(arr));
        prefix.insert(prefix.begin() , 0);

       int n = prefix.size();


        for(int i=1; i<n; i++)
           prefix[i] ^= prefix[i-1];
            
        
        int ans=0;
      
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(prefix[i] == prefix[j] )
                    ans+= j-i-1;
            }
        }



        return ans;

    }
};