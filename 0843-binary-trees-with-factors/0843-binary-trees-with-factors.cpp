class Solution {
public:
    
    int numFactoredBinaryTrees(vector<int>& arr) {
        unordered_map <int,long> mp;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]=1;
            for(int j=0;j<i;j++)
            {
                if(arr[i]%arr[j]==0 && mp.find(arr[i]/arr[j])!=mp.end()) //find right children
                {
                    mp[arr[i]]+=mp[arr[j]]*mp[arr[i]/arr[j]]; // total number of trees=(left*right)
                }
            }
        } 
        long val=0;
        for(auto it:mp)
        {
            val+=it.second;

        }
        
        return val%(int)(1e9+7);
    }
};